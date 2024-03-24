// Link To Problem : https://codeforces.com/contest/1794/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i <n; ++i){
            int t;
            cin >> t;
            a[i] = ++t;
            if(a[i] == 1) a[i] ++ ;
            
        }
        for(int i = 1; i < n; ++i){
            if(a[i]%a[i-1] == 0){
                a[i]++;
            }
        }
        for(auto i: a){
            cout << i << " ";
        }
        cout << endl;

    }
    return 0;
}