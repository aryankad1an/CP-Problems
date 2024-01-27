// Link To Problem : https://codeforces.com/contest/1915/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cassert>

using namespace std;
void solve(string s){
    int acount, bcount, ccount;
    acount = bcount = ccount = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'A'){
            acount++;
        }
        else if(s[i] == 'B'){
            bcount++;
        }
        else if(s[i] == 'C'){
            ccount++;
        }
    }
    if(acount == 0){
        cout << 'A' << endl;
    }
    else if(bcount == 0){
        cout << 'B' << endl;
    }
    else if(ccount == 0){
        cout << 'C' << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string a, b, c;
        cin >> a >> b >> c;
        solve(a);
        solve(b);
        solve(c);

        
    }
    return 0;
}