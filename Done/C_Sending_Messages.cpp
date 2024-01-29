// Link To Problem : https://codeforces.com/contest/1921/problem/C


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

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, f, a, b;
        cin>>n>>f>>a>>b;
        long long arr[n+1];
        arr[0] = 0;
        for(long long i=1;i<n+1;i++){
            cin>>arr[i];
        }
        long long units_of_charge_consumed = 0;
        for(long long i=0;i<n;i++){
            if((arr[i+1] - arr[i])*a > (b)) units_of_charge_consumed += b;
            else units_of_charge_consumed += (arr[i+1] - arr[i])*a;
        }
        if(units_of_charge_consumed < f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}