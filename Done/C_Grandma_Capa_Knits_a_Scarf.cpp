// Link To Problem : https://codeforces.com/problemset/problem/1582/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<climits>
#include<algorithm>
#define int long long

using namespace std;

bool checkPalindrome(string s){
    int n = s.size();
    for(int i = 0; i < n/2; ++i){
        if(s[i] != s[n-i-1]) return false;
    }
    return true;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> chars;
        for (int i = 0; i < n; ++i){
            chars.insert(s[i]);      
        }
        // edge case
        if(checkPalindrome(s)){
            cout << 0 << endl;
            continue;
        }
        int ans = INT_MAX;
        for(char c: chars){
            string scp = s;
            string sc2;
            for(int i = 0; i < n; ++i){  
                if(scp[i] == c){
                    scp[i] = ' ';
                }
                else{
                    sc2.push_back(scp[i]);
                }
            }

            if(!checkPalindrome(sc2)){
                continue;
            }

            int start = 0, end = n-1, startcnt = 0, endcnt = 0;
            while(start <= end){
                if(scp[start] == ' ' && scp[end] == ' '){
                    if(startcnt == endcnt){
                        scp[start] = c;
                        scp[end] = c;
                        start++;
                        end--;
                    }
                    else if(startcnt < endcnt){
                        start++;
                    }
                    else if(startcnt > endcnt){
                        end--;
                    }
                    
                }
                else if(scp[start] != ' ' && scp[end] == ' '){
                    startcnt++;
                    start++;
                }
                else if(scp[start] == ' ' && scp[end] != ' '){
                    end--;
                    endcnt++;
                }
                else{
                    startcnt++;
                    endcnt++;
                    start++;
                    end--;
                }
            }
            // cout << "Char: " << c << " " << scp << endl;
            int cnt = 0;
            for(int i = 0; i < n; ++i){
                if(scp[i] == ' ') cnt++;
            }
            ans = min(ans, cnt);
            
        }
        if(ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}