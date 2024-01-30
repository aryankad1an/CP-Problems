// Link To Problem : https://codeforces.com/contest/1919/problem/B


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
        int n;
        cin >> n;
        int sum = 0;
        while(n--){
            char c;
            cin >> c;
            if( c== '+') sum++;
            else sum--;
        }
        cout << abs(sum) << endl;
    }
    return 0;
}