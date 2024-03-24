// Link To Problem : https://codeforces.com/problemset/problem/1669/H


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
string intToBinaryString(int n){
    string s = "";
    while(n){
        s += (n % 2) + '0';
        n /= 2;
    }
    reverse(s.begin(), s.end());
    while(s.size() < 31){
        s = '0' + s;
    }
    return s;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<string> inp(n);
        for (int i = 0; i < n; ++i){
            int t;
            cin >> t;
            inp[i] = intToBinaryString(t);
        }
        vector<int> cnt(31, 0);
        for(int i = 0; i <= 30; ++i){
            for(int j = 0; j < n; ++j){
                if(inp[j][i] == '0'){
                    cnt[i]++;
                }
            }
        }
        
        int ans = 0;
        for(int i = 0; i < 31; ++i){
            if(cnt[i] <= k){
                k-= cnt[i];
                ans |= (1 << (30 - i));
            }
        }
        cout << ans << endl;
    }
    return 0;
}