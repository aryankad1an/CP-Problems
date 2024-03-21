// Link To Problem : https://codeforces.com/problemset/problem/1915/E


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
        for (auto &i: a) cin >> i;
        for(int i = 0; i < n; ++i){
            if(i%2!=0) a[i] *= -1;
        }
        vector<int> prefix(n, 0);
        prefix[0] = a[0];
        for(int i = 1; i < n; ++i){
            prefix[i] = prefix[i - 1] + a[i];
        }
        sort (prefix.begin(), prefix.end());

        bool flag = false;
        for(int i = 0; i < n-1; ++i){
            if(prefix[i] == prefix[i+1] || prefix[i] == 0){
                flag = true;
                break;
            }
        }
        if(prefix[n-1] == 0) flag = true;

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;


    }
    return 0;
}