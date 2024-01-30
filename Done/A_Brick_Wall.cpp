// Link To Problem : https://codeforces.com/contest/1918/problem/0


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        long a, b;
        cin >> a >> b;
        cout << a*(b/2) << endl;
    }
    return 0;
}