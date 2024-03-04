// Link To Problem : https://codeforces.com/contest/1933/problem/D


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = false;

        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;      
        }
        sort (a.begin(), a.end());
        int x = a[0];
        int flag2 = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] % x != 0){
                flag2 = 1;
                break;
            }
        }
        if(flag2 == 0){
            if(mp[x] > 1){
                flag = true;
            }
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}