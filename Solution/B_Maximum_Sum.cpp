// Link To Problem : https://codeforces.com/problemset/problem/1832/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define ll long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n,k,b,maxi=0;
        cin>>n>>k;
        vector < ll > v,pre(n+1);
        for(ll i = 0 ; i < n ; i++) {
            cin>>b;
            v.push_back(b);
        }
        sort(v.begin(),v.end());
        // generating a 1 indexed prefix array
        for(ll i = 0 ; i < n ; i++) {
            pre[i+1] = pre[i]+v[i];
        }
        // the main part (check-> https://www.youtube.com/watch?v=i8u76nLafZk)
        for(ll i = 0 ; i <= k ; i++) {
            maxi = max(maxi, pre[n-i]-pre[2*(k-i)]);
        }
        cout<<maxi<<endl;
    }
    return 0;
}  