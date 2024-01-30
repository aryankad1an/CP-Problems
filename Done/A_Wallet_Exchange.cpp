// Link To Problem : https://codeforces.com/contest/1919/problem/A


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
        if((a-b) %2==0) cout << "Bob" << endl;
        else cout << "Alice" << endl;
    }
    return 0;
}