// Link To Problem : https://codeforces.com/problemset/problem/1857/D


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
        vector<int> b(n);
        for(int i = 0; i < n; ++i){
            cin >> b[i];
        }
        vector<int> diff(n);
        for (int i = 0; i < n; ++i){
            diff[i] = a[i] - b[i];
        }
        int max = *max_element(diff.begin(), diff.end());
        vector<int> ans;
        for(int i = 0; i < n; ++i){
            if(diff[i] == max){
                ans.push_back(i+1);
            }
        }
        cout << ans.size() << endl;
        for(int i: ans){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}