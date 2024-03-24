// Link To Problem : https://codeforces.com/problemset/problem/1891/B


#include<iostream>
#include<vector>
#include<map>
#include<cmath>
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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector <int> b;
        set<int> temp;
        for(int i = 0; i < m; i++){
            int z;
            cin >> z;
            if(temp.find(z) == temp.end()){
                b.push_back(z);
                temp.insert(z);
            }
        }
    

        for(auto i: b){
            for(int j = 0; j<n; ++j){
                if(a[j]%(1<<i) == 0){
                    a[j] += pow(2, i-1);
                }
                // cout << a[j]%(1<<i) << " ";
                // cout << (1<<i) << " ";
                // cout << endl;
            }
        }
        
        // print
        for(auto i: a){
            cout << i << " ";
        }
        cout << endl;
        
    }
    return 0;
}