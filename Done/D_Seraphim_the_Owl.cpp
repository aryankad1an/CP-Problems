// Link To Problem : https://codeforces.com/contest/1945/problem/D


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<climits>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        int ans = 0;
        for(int i = n-1; i>=m; --i){
            ans += min(a[i], b[i]);
        }
        vector<int> prefix(m, 0);
        for(int i = m-1; i >= 0; --i){
            if(i==m-1) prefix[i] = b[i];
            else prefix[i] += prefix[i+1] + b[i];
        }
        int toAdd = INT_MAX;
        for(int i = 0; i < m; ++i){
            if(i==m-1){
                toAdd = min(toAdd, a[i]);
            }
            else toAdd = min(toAdd, prefix[i+1]+a[i]);
        }
        cout << ans+toAdd << endl;

    }
    return 0;
}