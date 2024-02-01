// Link To Problem : https://codeforces.com/contest/1899/problem/A


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
        int a;
        cin >> a;
        if(a%3==0) cout << "Second" << endl;
        else cout << "First" << endl;
    }
    return 0;
}