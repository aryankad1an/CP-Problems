// Link To Problem : https://codeforces.com/problemset/problem/1850/E


#include<iostream>
#include<vector>
#include<map>
#include<cmath> 
#include<set>
#include<algorithm>
#define int unsigned long long
using namespace std;
int val(vector<int> v, int w){
    int ans = 0;
    int n = v.size();
    for(int i = 0; i < n; ++i){
        ans += ((v[i])+(2*w))*((v[i])+(2*w));
        if(ans > 1e18){
            break;
        }
    }
    
    return ans;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for(int i = 0; i < n; ++i){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int l = 1, r= 10e9;
        while(r-l>1){
            int m = l + (r-l)/2;
            // cout << m << endl;
            if(val(v, m) <= c){
                l = m;
            }
            else{
                r = m-1;
            }
        }
        if(val(v, l) == c){
            cout << l << endl;
        }
        else{
            cout << r << endl;
        }
        
    }
    return 0;
}