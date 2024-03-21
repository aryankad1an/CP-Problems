// Link To Problem : https://codeforces.com/problemset/problem/1881/D


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
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &i: a) cin >> i;
        map<int, int> primeFactors;
        for(auto i: a){
            for(int j = 2; j*j <= i; ++j){
                if(i%j == 0){
                    int cnt = 0;
                    while(i%j == 0){
                        i /= j;
                        cnt++;
                    }
                    primeFactors[j] += cnt;
                }
            }
            if(i > 1){
                primeFactors[i] ++;
            }
        }
        bool flag = false;
        for(auto i: primeFactors){
            if(i.second %n != 0){
                flag = true;
                break;
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }

    return 0;
}