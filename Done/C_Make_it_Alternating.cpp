// Link To Problem : https://codeforces.com/problemset/problem/1879/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long
const int M = 998244353;

using namespace std;

int factModuloM(int n){
    int fact = 1;
    for(int i = 1; i <= n; ++i){
        fact = (fact * i) % M;
    }
    return fact;
}   
int powerModuloM(int x, int y){
    int res = 1;
    x = x % M;
    while (y > 0){
        if (y & 1)
            res = (res*x) % M;
        y = y>>1;
        x = (x*x) % M;
    }
    return res;
}

int nCmModuloM(int n, int m){
    if(m > n) return 0;
    int num = factModuloM(n);
    int den = (factModuloM(m) * factModuloM(n - m)) % M;
    return (num * powerModuloM(den, M - 2)) % M;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        vector<int> ans;
        int temp = 0;
        for(int i = 0; i < (int) s.size()-1; ++i){
            if(s[i] == s[i+1]){
                temp ++;
            }
            else{
                if(temp!=0) ans.push_back(temp);
                temp = 0;
            }
        }
        if(temp!=0) ans.push_back(temp);
        int ans1 = 0;
        int ans2 = 1;
        for(int i =0; i < ans.size(); ++i){
            ans1 += ans[i];
            ans2 = (ans2*nCmModuloM(ans[i]+1, ans[i])) % M;
        }
        cout << ans1 << " " << factModuloM(ans2) << endl;
    }
    return 0;
}