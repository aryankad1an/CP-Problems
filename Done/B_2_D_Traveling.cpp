// Link To Problem : 


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
        int n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<int, int> > v;
        pair<int, int> from, to;
        vector<pair<int, int> > important;
        for(int i = 0; i < n; ++i){
            
            int x, y;
            cin >> x >> y;
            if(k>0){
                v.push_back({x, y});
                important.push_back({x, y});
                k--;
            }
            else{
                v.push_back({x, y});
            }
            if(i==a-1) from = {x, y};
            if(i==b-1) to = {x, y};
        }
        int val = abs(from.first - to.first) + abs(from.second - to.second);
        int min1 = 10e9;
        int min2 = 10e9;

        for(auto p: important){
            int temp1 = abs(p.first - to.first) + abs(p.second - to.second);
            int temp2 = abs(p.first - from.first) + abs(p.second - from.second);
            min1 = min(min1, temp1);
            min2 = min(min2, temp2);
        }
        cout << min(val, min1+min2) << endl;
        
    }
    return 0;
}