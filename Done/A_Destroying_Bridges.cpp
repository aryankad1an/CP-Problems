// Link To Problem : https://codeforces.com/contest/1944/problem/0


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
        if(k>=n-1){
            cout << 1 << endl;
        }
        else{
            cout << n << endl;
        }
    }
    return 0;
}