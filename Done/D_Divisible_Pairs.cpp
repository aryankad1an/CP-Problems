// Link To Problem : https://codeforces.com/problemset/problem/1931/D   


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
        int n, x, y;
        cin >> n >> x >> y;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        map<pair<int, int>, int > hsh;
        set<pair<int, int> > arr;

        for(int i = 0; i < n; i++){
            hsh[{a[i] % x, a[i] % y}]++;
            arr.insert({a[i] % x, a[i] % y});
        }
        int ans = 0;
        // print hash mpa
        
        

        for(auto i : arr){
            if(i.first == x/2 && x%2==0){
                ans += hsh[{i.first, i.second}]* (hsh[{i.first, i.second}] - 1)/2;
            }
            else if(i.first==0) {
                ans += hsh[{i.first, i.second}]* (hsh[{i.first, i.second}] - 1)/2;
            }
            else {
                ans += hsh[{x - i.first, i.second}]* (hsh[{i.first, i.second}]);
            }
            hsh[{i.first, i.second}] = 0;
        }
        cout << ans << endl;
        // cout << endl;
        

        

    }
    return 0;
}