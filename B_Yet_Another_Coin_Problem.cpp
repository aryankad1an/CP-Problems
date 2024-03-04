// Link To Problem : https://codeforces.com/contest/1934/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ans = 0;
        ans += n/15;
        n%=15;
        ans += n/10;
        n%=10;
        ans += n/6;
        n%=6;
        ans += n/3;
        n%=3;
        ans += n;
        cout << ans-1 << endl;
    }
    return 0;
}