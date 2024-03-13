// Link To Problem : https://codeforces.com/problemset/problem/1742/E


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
        int n, q;
        cin >> n >> q;
        vector<int> str(n);
        vector<int> que(q);
        for(int i = 0; i < n; i++){
            cin >> str[i];
        }
        for(int i = 0; i < q; i++){
            cin >> que[i];
        }
        vector<int> prefix(n);
        prefix[0] = str[0];
        for(int i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + str[i];
        }
        vector<int> maxes(n);
        maxes[0] = str[0];
        for(int i = 1; i < n; i++){
            maxes[i] = max(maxes[i-1], str[i]);
        }

        map<int, int> lastoccurencemap;
        for(int i = 0; i < n; i++){
            lastoccurencemap[maxes[i]] = i;
        }

        for(auto i: que){
            if(i<maxes[0]) {
                cout << 0 << " ";
                continue;
            }
            if(lastoccurencemap.find(i) == lastoccurencemap.end()){
                // find the value in map just lesser than i without using lower bound
                auto it = lastoccurencemap.lower_bound(i);
                if (it != lastoccurencemap.begin()) {
                    it--;
                }
                cout << prefix[it->second] << " ";
            }
            else{
                cout << prefix[lastoccurencemap[i]] << " ";
            }
        }
        cout << endl;
        
       
    }
    return 0;
}