// Link To Problem : https://cses.fi/problemset/task/1621


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
    set<int> a;
    for(int i = 0; i < t; ++i){
        int n;
        cin >> n;
        a.insert(n);
    }
    cout << a.size() << endl;
    return 0;
}