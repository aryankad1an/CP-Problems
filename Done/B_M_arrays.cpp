// Link To Problem : https://codeforces.com/problemset/problem/1497/B


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
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        map<int, int> hsh;
        for (int i = 0; i < n; i++){
            int t;
            cin >> t;
            t = t % m;
            hsh[t]++;
        }
        int ans = 0;
        for(int i = 0; i <= m/2; ++i){
            if(i==0 && hsh[i] > 0) ans++;
            else{
                int j = m-i;
                if(i==j && hsh[i] > 0){
                    ans++;
                    continue;
                }
                int cnt1 = hsh[i];
                int cnt2 = hsh[j];
                if(cnt1 == 0 || cnt2 == 0) {
                    ans += cnt1+cnt2;
                    continue;
                }

                if(cnt1 == cnt2){
                    ans++;
                    continue;
                }
                else if(cnt1 > cnt2){
                    cnt1 -= cnt2+1;
                    ans+=cnt1+1;
                }
                else{
                    cnt2 -= cnt1+1;
                    ans+=cnt2+1;
                }
            }
        }
        cout << ans << endl;
        // cout  << endl;


    }
    return 0;
}