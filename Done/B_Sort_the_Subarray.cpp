// Link To Problem : https://codeforces.com/problemset/problem/1821/B


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
        for(auto &i: a) cin >> i;
        vector<int> b(n);
        for(auto &i: b) cin >> i;
        int ans = 0;
        int i1 = -1, j1 = -1;
        multimap<int, pair< int, int> > vp;
        int temp = 1;
        for(int i = 0; i < n-1; ++i){
            if(b[i] <= b[i+1]){
                if(i1 == -1) i1 = i+1; 
                temp++;
            }
            else{
                j1 = i+1;
                ans = max(ans, temp);
                // vp.insert{temp, {i1, j1}};
                vp.insert(make_pair(temp, make_pair(i1, j1)));
                i1 = -1, j1 = -1;
                temp  = 1;
            }
        }
        if(temp > 1) {
            vp.insert(make_pair(temp, make_pair(i1, n)));
        }
        ans = max(ans, temp);   
        pair<int, int> last = {-1, -1};
        for(auto i: vp){
            // cout <<  i.second.first << " " << i.second.second << endl;
            int start = i.second.first;
            int end = i.second.second;
            bool flag = false;
            for(int i = start-1; i < end; ++i){
                if(a[i]!=b[i]){
                    flag = true;
                    break;
                }
            }
            if(flag) last = i.second;
        }
        
        if(last.first==-1&&last.second==-1) 
            // cout << vp[ans].first<< " " << vp[ans].second << endl;
            for(auto p: vp){
                if(p.first==ans){
                    cout << p.second.first << " " << p.second.second << endl;
                    break;
                }
                
            }
        else{
            cout << last.first << " " << last.second << endl;
        }
    }
    return 0;
}