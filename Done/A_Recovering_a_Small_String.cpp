// Link To Problem : https://codeforces.com/contest/1931/problem/0


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
        int n;
        cin >> n;
        char a, b, c;
        if(n>53){
            b = 'z';
            c = 'z';
            a = 'a' + (n-53);
            cout << a << b << c << endl;
        }
        else if(n>28){
            a  = 'a';
            c = 'z';
            b = 'a' + (n-28);
            cout << a << b << c << endl;
        }
        else{
            a = 'a';
            b = 'a';
            c = 'a' + (n-3);
            cout << a << b << c << endl;
        }
    }
    return 0;
}