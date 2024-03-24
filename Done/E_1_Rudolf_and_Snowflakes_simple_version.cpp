// Link To Problem : https://codeforces.com/problemset/problem/1846/E1


#include<iostream>
#include<vector>
#include<map>
#include<cmath>
#include<set>
#include<algorithm>
#define int long long

using namespace std;



int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool didfound = false;
        for(int k = 2; k*k <= n; ++k){
            int val = k*k*k;
            int sum = 1+k+(k*k);
            while(sum <= n){
                if(sum == n){
                    didfound = true;
                    break;
                }
                sum += val;
                val = val*k;
            }
            if(sum == n){
                didfound = true;
                break;
            }
        }
        cout << (didfound ? "YES" : "NO") << endl;
    }
    return 0;
}