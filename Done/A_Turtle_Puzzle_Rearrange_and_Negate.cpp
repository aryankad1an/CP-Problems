// Link To Problem : https://codeforces.com/contest/1933/problem/0


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
        int abssum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            abssum += abs(a[i]);
        }
        cout << abssum << endl;
    }
    return 0;
}