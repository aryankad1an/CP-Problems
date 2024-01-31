// Link To Problem : https://codeforces.com/contest/1902/problem/A


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
        string s;
        cin >> n >> s;
        int flag = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='0') {cout << "YES" << endl; flag = 1; break; }
        }
        if(flag == 0) cout << "NO" << endl;
    }
    return 0;
}