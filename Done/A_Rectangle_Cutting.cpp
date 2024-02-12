// Link To Problem : https://codeforces.com/contest/1928/problem/A


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<cmath>
#define long long long int

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a>> b;
        int x = max(a,b);
        int y = min(a,b);
        
        if(x%2!=0 && y%2!=0) cout << "No" << endl;
        else if(x%y==0 && x/y == 2 && (x%2!=0 || y%2!=0)) cout << "No" << endl;
        else cout << "Yes" << endl;
        
        
    }
    return 0;
}