// Link To Problem : https://codeforces.com/contest/1907/problem/A


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
int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char pos1 = s[0];
        int pos2 = s[1] - '0';

        // print d1 d2 d3 d4 d5 d6 d7 d8
        for(int i = 1; i <= 8; i++){
            string out = "";
            out += pos1;
            out += to_string(i);
            if(out == s){
                continue;
            }
            else{
                cout << out << endl;
            }
        }
        // print a5 b5 c5 d5(skip) e5 f5 g5 h5
        for(int i = 1; i <= 8; i++){
            string out = "";
            out += (char)('a' + i - 1);
            out += to_string(pos2);
            if(out == s){
                continue;
            }
            else{
                cout << out << endl;
            }
        }

    }
    return 0;
}