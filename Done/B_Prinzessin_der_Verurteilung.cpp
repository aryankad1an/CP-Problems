// Link To Problem : https://codeforces.com/problemset/problem/1536/B


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
        string ans = "";
        bool didfind = false;
        for(char c = 'a'; c <= 'z'; ++c){
            didfind = false;
            for(int i = 0; i < n; ++i){
                if(s[i] == c){
                    didfind = true;
                    break;
                }
            }
            if(!didfind){
                ans.push_back(c);
                break;
            }
        }
        if(!didfind){
            cout << ans << endl;
            continue;
        }
        ans = "";
        for(char c = 'a'; c <= 'z'; ++c){
            for(char d = 'a'; d<='z'; ++d){
                string subtocheck;
                subtocheck.push_back(c);
                subtocheck.push_back(d);
                // check is subtocheck is a substring in s
                bool issub = false;
                for(int i = 0; i < n-1; ++i){
                    if(s[i] == c && s[i+1] == d){
                        issub = true;
                        break;
                    }
                }
                if(!issub){
                    ans = subtocheck;
                    break;
                }
            }
            if(ans.size() > 0){
                break;
            }
        }
        if(ans.size() == 0){
            for (char c = 'a'; c <= 'z'; ++c){
                for (char d = 'a'; d <= 'z'; ++d){
                    for (char e = 'a'; e <= 'z'; ++e){
                        string subtocheck;
                        subtocheck.push_back(c);
                        subtocheck.push_back(d);
                        subtocheck.push_back(e);
                        // check is subtocheck is a substring in s
                        bool issub = false;
                        for (int i = 0; i < n - 2; ++i){
                            if (s[i] == c && s[i + 1] == d && s[i+2] == e){
                                issub = true;
                                break;
                            }
                        }
                        if (!issub){
                            ans = subtocheck;
                            break;
                        }
                    }
                    if (ans.size() > 0){
                        break;
                    }
                }
                if (ans.size() > 0){
                    break;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}