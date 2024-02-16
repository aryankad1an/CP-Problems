// Link To Problem : https://codeforces.com/contest/1929/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long n, k;
        cin >> n >> k;
        
        long l = 2*(n+(n-2));
        long b = (n-1)*2;

        if(k <= l){
            if(k%2==0) cout << (k/2) << endl;
            else cout << (k/2)+1 << endl;
        }
        else{
            long rem = k - l;
            cout << rem + (l/2) << endl;
        }
    }
    return 0;
}