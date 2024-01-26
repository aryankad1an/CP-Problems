// Link To Problem : https://codeforces.com/contest/1914/problem/A


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
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int ans = 0;
        int hasArrForChars[26] = {0};
        for(int i = 0; i < n; i++){
            hasArrForChars[s[i] - 'A']++;
        }
        for(int i = 0; i < 26; i++){
            if(hasArrForChars[i] >= i+1){
                ans++;
            }
        }
        cout << ans << endl;
    }
    
    return 0;
}