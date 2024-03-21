// Link To Problem : https://codeforces.com/problemset/problem/1927/D


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
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<int> nextInequalIndex(n, -1);
        for(int i = n - 1; i >= 0; --i){
            if(i == n-1 || a[i] != a[i + 1]){
                nextInequalIndex[i] = i + 1;
            }else{
                nextInequalIndex[i] = nextInequalIndex[i + 1];
            }
        }
        int q;
        cin >> q;
        while(q--){
            int l, r;
            cin >> l >> r;
            --l, --r;
            if(nextInequalIndex[l] > r){
                cout << -1 << " " << -1 << endl;
            }
            else{
                cout << l+1 << " " << nextInequalIndex[l]+1 << endl;
            }
        }
        cout << endl;
    }
    return 0;
}