// Link To Problem : https://codeforces.com/contest/1907/problem/B


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
        
        vector<int> lowers;
        vector<int> uppers;
        vector<int> toremove;
        int acc =0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != 'B' && s[i] != 'b'){
                if(s[i] >= 'a' && s[i] <= 'z'){
                    lowers.push_back(i);
                }
                else{
                    uppers.push_back(i);
                }
            }
            else{
                if(s[i] == 'b' && lowers.size() > 0){
                    s[lowers[lowers.size() -1]] = 'b';
                    lowers.pop_back();
                }
                else if(s[i] == 'B' && uppers.size() > 0){
                    s[uppers[uppers.size() - 1]] = 'B';
                    uppers.pop_back();
                }
                else{
                    continue;
                }
            }
        }
        for(char i: s){
            if(i == 'B' || i == 'b'){
                continue;
            }
            else{
                cout << i;
            }
        }
        cout << endl;
    }
    return 0;
}