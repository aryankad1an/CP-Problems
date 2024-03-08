// Link To Problem : https://codeforces.com/problemset/problem/1213/C   


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;

long cal(long num){
    int ans = 0;
    for(int i = 1; i < 11;++i){
        // ans += (num*i)%10;
        // modular arithmetic
        ans += ((num%10)*(i%10))%10;
    }
    return ans;
}
long cal(long num, long lim){
    int ans = 0;
    for(int i = 1; i < lim+1;++i){
        ans += ((num%10)*(i%10))%10;

    }
    return ans;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        long n, m;
        cin >> n >> m;

        long intermediate = (n/m)/10;
        long intermediate2 = (n%(m*10))/m;
        
        cout << cal(m)*(intermediate)+cal(m,intermediate2) << endl; 


    }
    return 0;
}