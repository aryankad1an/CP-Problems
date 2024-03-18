// Link To Problem : https://codeforces.com/problemset/problem/1520/D


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int nC2(int n){
    return n*(n-1)/2;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        vector<int> diff(n);
        for(int i = 0; i<n; ++i){
            diff[i] = a[i] - (i+1);
        }
        sort(diff.begin(), diff.end());
        // for(auto i: diff){
        //     cout << i << " ";
        // } 
        // cout << endl;
        int tmp = 1;
        int ans = 0;
        for(int i =0; i < n; ++i){
            if(i < n-1 && diff[i] == diff[i+1]){
                tmp++;
            }
            else{
                ans += nC2(tmp);
                tmp = 1;
            }
        }
        cout << ans << endl;
    }    
    return 0;
}