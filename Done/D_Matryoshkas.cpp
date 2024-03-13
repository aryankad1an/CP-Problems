// Link To Problem : https://codeforces.com/problemset/problem/1790/D


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map<int, int> hsh;
        for(int i = 0; i < n; i++){
            int t;
            cin >> t;
            hsh[t]++;
        }
        int maxm = -1;
        for(auto x: hsh){
            maxm = max(maxm, x.second);
        }
        vector<vector<int> > v(maxm);
        for(auto x: hsh){
            for(int i = 0; i < x.second; i++) v[i].push_back(x.first);
        }
        int ans = 0;
        for(int i = 0; i < maxm; i++){
            for(int j = 0; j < (int)v[i].size(); j++){
                if(j == 0) ans++;
                else if(v[i][j] != v[i][j-1] + 1) ans++;
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}