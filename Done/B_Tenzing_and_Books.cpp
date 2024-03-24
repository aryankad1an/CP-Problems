// Link To Problem : https://codeforces.com/problemset/problem/1842/B


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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector <int> b(n);
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        vector <int> c(n);
        for(int i = 0; i < n; i++){
            cin >> c[i];
        }
        int curr = 0;
        for(int i = 0; i < n; ++i){
            if(a[i] <= k && (a[i]|k) == k){
                curr |= a[i];
            }
            else{
                break;
            } 
        }

        for(int i = 0; i < n; ++i){
            if(b[i] <= k && (b[i]|k) == k){
                curr |= b[i];
            }
            else{
                break;
            } 
        }

        for(int i = 0; i < n; ++i){
            if(c[i] <= k && (c[i]|k)==k){
                curr |= c[i];
            }
            else{
                break;
            } 
        }

        if(curr == k){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}