// Link To Problem : https://codeforces.com/problemset/problem/1561/C


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
        vector<pair <int, vector<int>> > enemies;
        for(int i = 0; i < n; ++i){
            int m;
            cin >> m;
            vector<int> a(m);
            int minus = 0;
            int mx = 0;
            for(int j = 0; j < m; ++j){
                int w;
                cin >> w;
                a[j] = w - minus;
                minus++;
                mx = max(mx, a[j]);
            }
            enemies.push_back({mx, a});
        }
        sort (enemies.begin(), enemies.end());
        int ans = enemies[0].first + 1;
        int adder = 0;
        for(auto i: enemies){
 
            if(ans + adder <= i.first) ans = i.first + 1 - adder;
            adder += i.second.size();
        }
        cout << ans << endl;
    }
    return 0;
}