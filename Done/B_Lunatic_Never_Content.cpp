// Link To Problem : https://codeforces.com/problemset/problem/1826/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<numeric>
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
        int dawg;
        n%2==0? dawg = n/2: dawg = n/2+1;
        vector<int> diff;
        for(int i = 0; i < dawg; ++i){
            diff.push_back(abs(a[i] - a[n-i-1]));
        }
        int gcd = 0;
        for(auto i: diff){
            gcd = __gcd(gcd, i);
        }
        cout << gcd << endl;
    }
    return 0;
}