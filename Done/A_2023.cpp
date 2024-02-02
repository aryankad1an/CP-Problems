// Link To Problem : https://codeforces.com/contest/1916/problem/A


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        long n, k;
        cin >> n >> k;
        vector<long> v;
        for (long i = 0; i < n; i++){
            long x;
            cin >> x;
            v.push_back(x);
        }
        long prod = 1;
        for(long i = 0; i < n; i++){
            prod *= v[i];
        }
        if(2023 % prod == 0 && prod != 0){
            cout << "YES" << endl;
            cout << 2023 / prod << " ";
            for(long i = 1; i < k; i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}