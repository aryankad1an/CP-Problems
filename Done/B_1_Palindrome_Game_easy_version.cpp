// Link To Problem : https://codeforces.com/problemset/problem/1527/B1


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> hsh;
        for(int i = 0; i < n; i++){
            hsh[s[i]]++;
        }
       
        if(hsh['0']%2==0){
            if(hsh['0'] == 0) cout << "DRAW" << endl;
            else cout << "BOB" << endl;
        }
        else{
            if(hsh['0'] == 1) cout << "BOB" << endl;
            else cout << "ALICE" << endl;
        }
            
        
    }
    return 0;
}