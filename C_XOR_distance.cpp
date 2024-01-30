// Link To Problem : https://codeforces.com/contest/1918/problem/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<climits>
#include<cmath>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, r;
        cin >> a >> b >> r;
        int n = 0;
        // finding the max value of 2^n just smaller than r
        for(int i=0; i<32; i++){
            if(pow(2, i) <= r) n = i;
            else break;
        }
        // iterating from 0 to n
        int ans = abs(a - b);

        for(int i=0; i<=n; i++){
            int dawg = pow(2, i);
            if(abs((a^dawg) - (b^dawg)) < ans) ans = abs((a^dawg) - (b^dawg));
        }
        cout << ans << endl;
    }
    return 0;
}