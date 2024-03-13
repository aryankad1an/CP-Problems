// Link To Problem : https://codeforces.com/contest/1941/problem/D


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
        int n, m, x;
        cin >> n >> m >> x;
        vector<pair<int, char> > throws(m);
        for(int i = 0; i < m; i++){
            cin >> throws[i].first;

            cin >> throws[i].second;
        }
        set<int> players;
        set<int> temp;
        players.insert(x);
        for(auto &p: throws){
            int intensity = p.first;
            int dir = p.second;
            if(dir == '0'){
                for(auto i: players){
                    int toinsert = i+intensity;
                    if(toinsert > n) toinsert %= n;
                    temp.insert(toinsert);
                }
                players.clear();
                for(auto i: temp){
                    players.insert(i);
                }
                temp.clear();
            }
            else if(dir == '1'){
                for(auto i: players){
                    int toinsert = i-intensity;
                    if(toinsert <= 0) toinsert = (toinsert+n);
                    temp.insert(toinsert);
                }
                players.clear();
                for(auto i: temp){
                    players.insert(i);
                }
                temp.clear();
            }
            else{
                for(auto i: players){
                    int toinsert = i+intensity;
                    if(toinsert > n) toinsert %= n;
                    temp.insert(toinsert);
                    toinsert = i-intensity;
                    if(toinsert <= 0) toinsert = (toinsert+n);
                    temp.insert(toinsert);
                }
                players.clear();
                for(auto i: temp){
                    players.insert(i);
                }
                temp.clear();
            }
        }
        cout << players.size() << endl;
        for (auto i: players){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}