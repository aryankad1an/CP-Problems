// Link To Problem : https://codeforces.com/problemset/problem/1514/B


#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<set>
#include<algorithm>
#define int long long
const int M = 1000000007;

using namespace std;
int expo(int n, int k){
    int res = 1;
    // binary exponentiation
    while(k > 0){
        // Check if k is odd
        if(k % 2 == 1){
            // Multiply res by n and take the modulo M
            res = (res * n) % M;
        }
        // Square n and take the modulo M
        n = (n * n) % M;
        // Divide k by 2
        k = k / 2;
    }
    return res;
    
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << expo(n, k) << endl;

        
    }
    return 0;
}