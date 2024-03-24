// Link To Problem : https://codeforces.com/problemset/problem/1775/B


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
        map<int, int> mp;
        map<int, int> dp[n];
    
        for(int i = 0; i < n; ++i){
            int k;
            cin >> k;
            while(k--){
                int z;
                cin >> z;
                mp[z]++;
                dp[i][z]++;
            }
        }
        bool f = false;
        for(int i = 0; i < n; ++i){
            bool flag = true;
            for(auto x : dp[i]){
                if(mp[x.first] - dp[i][x.first] <= 0){
                    flag = false;
                    break;
                }
            }
            if(flag){
                f = true;
                break;
            }
        }
        if(f){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        
    }
    return 0;
}