// Link To Problem : https://codeforces.com/problemset/problem/1916/B


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
        int a, b;
        cin >> a >> b;
        if(a<b) swap(a, b);
        int a1 = a,b1 = b;

        int g = __gcd(a,b);
        long ans = 1;
        if(b==1){
            ans *= a;
        }
        while(g!=1){
            a/=g;
            b/=g;
            ans *= g;
            g = __gcd(a, b);
        }
        ans *= (a*b);
        if(ans==a1) ans *= a;
        cout << ans << endl;
        
    }
    return 0;
}