// Link To Problem : https://codeforces.com/problemset/problem/1487/B


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
        if(n%2==0){
            cout << (k-1)%n + 1 << endl;
        }
        else{
            int no_of_jumps = (k-1)/((n)/2);
            int rest = k - no_of_jumps;
            cout << (no_of_jumps*2 + rest-1)%n+1 << endl;
        }
    }
    return 0;
}