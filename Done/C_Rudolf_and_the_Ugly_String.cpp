// Link To Problem : https://codeforces.com/contest/1941/problem/C


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
        string s;
        cin >> s;
        // check for substring pie
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'p' && i+1 < n && s[i+1] == 'i' && i+2 < n && s[i+2] == 'e'){
                ans++;
                i += 2;
            }
            if(s[i] == 'm' && i+1 < n && s[i+1] == 'a' && i+2 < n && s[i+2] == 'p'){
                ans++;
                i += 2;
            }
            // check for substr mapie
            if(s[i] == 'm' && i+1 < n && s[i+1] == 'a' && i+2 < n && s[i+2] == 'p' && i+3 < n && s[i+3] == 'i' && i+4 < n && s[i+4] == 'e'){
                ans--;
                i += 4;
            }
        }
        cout << ans << endl;
    }
    return 0;
}