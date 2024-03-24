// Link To Problem : https://cses.fi/problemset/task/1084


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> app(n);
    vector<int> size(m);
    for (int i = 0; i < n; ++i){
        cin >> app[i];
    }
    for(int i = 0; i < m; ++i){
        cin >> size[i];
    }
    sort(app.begin(), app.end());
    sort(size.begin(), size.end());
    
    return 0;
}