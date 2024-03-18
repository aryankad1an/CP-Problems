// Link To Problem : https://codeforces.com/problemset/problem/1504/B


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
        string a, b;
        cin >> a >> b;
        vector<int> zeroesFromLeft(n, 0);
        for(int i = 0; i<n; ++i){
            if(a[i] == '0') zeroesFromLeft[i]++;
            if(i > 0) zeroesFromLeft[i] += zeroesFromLeft[i-1];
        }

        bool flip = false;
        bool ans = true;
        for(int i = n-1; i>=0; --i){
            if(flip){
                if(a[i] == b[i]){
                    flip = false;
                    if(zeroesFromLeft[i] != (i+1-zeroesFromLeft[i])){
                        ans = false;
                        break;
                    }
                }
            }
            else{
                if(a[i] != b[i]){
                    flip = true;
                    if(zeroesFromLeft[i] != (i+1-zeroesFromLeft[i])){
                        ans = false;
                        break;
                    }
                }
            }
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}