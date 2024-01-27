// Link To Problem : https://codeforces.com/contest/1925/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cassert>
bool isPrime(int n) {
    if (n == 1) {
        return false;
    }
    if (n == 2 || n == 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;

        if(isPrime(n)){
            if(k == 1){
                cout << n << endl;
                continue;
            }
            else{
                cout << 1 << endl;
                continue;
            }
            
        }

        // finding factors of n (most optimized way) and storing them in a vector
        vector<int> factors;
        for(int i = 1; i*i <= n; i++){
            if(n%i == 0){
                factors.push_back(i);
                // to avoid duplicates
                if(i != n/i){
                    factors.push_back(n/i);
                }
            }
        }

        sort(factors.begin(), factors.end());

        
        
        // finding the smallest factor of n larger thanl k
        int smallestFactor = n;
        for(int i = 0; i < factors.size(); i++){
            if(factors[i] >= k){
                smallestFactor = factors[i];
                break;
            }
        }
        k = smallestFactor;
        
        
        
        cout << n/k << endl;
    }
    return 0;
}