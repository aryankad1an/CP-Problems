// Link To Problem : https://codeforces.com/problemset/problem/1245/B


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
        int R, P, S;
        cin >> R >> P >> S;
        int scp = S, rcp = R, pcp = P;
        string str;
        cin >> str;
        map<char, int> hsh;
        for(int i = 0; i < n; i++){
            hsh[str[i]]++;
        }
        int r1  = hsh['R'], p1 = hsh['P'], s1 = hsh['S'];
        int wincount = min(R, s1) + min(P, r1) + min(S, p1);
        R = R - min(R, s1);
        s1 = s1 - min(s1, R);
        P = P - min(P, r1);
        r1 = r1 - min(r1, P);
        S = S - min(S, p1);
        p1 = p1 - min(p1, S);
        // cout << "R: " << R << " P: " << P << " S: " << S << endl;

        int drawcount = min(r1, R) + min(p1, P) + min(s1, S);
        R = R - min(r1, R);
        r1 = r1 - min(r1, R);
        P = P - min(p1, P);
        p1 = p1 - min(p1, P);
        S = S - min(s1, S);
        s1 = s1 - min(s1, S);
        // cout << "R: " << R << " P: " << P << " S: " << S << endl;
        int lostcount = n - wincount - drawcount;
        // cout << wincount << " " << drawcount << " " << lostcount << endl;

        int z;
        if(n%2==0) z = n/2;
        else z = n/2 + 1;
        if(wincount >= z){
            cout << "YES" << endl;
            S = scp;
            R = rcp;
            P = pcp;
            string ans = str;
            // first get all the wins
            for(int i = 0; i < n; i++){
                if(str[i] == 'R' && P > 0){
                    ans[i] = 'P';
                    P--;
                }
                else if(str[i] == 'P' && S > 0){
                    ans[i] = 'S';
                    S--;
                }
                else if(str[i] == 'S' && R > 0){
                    ans[i] = 'R';
                    R--;
                }
            }
            // now get all the draws
            for(int i = 0; i < n; i++){
                if(ans[i] == str[i]){
                    if(R > 0){
                        ans[i] = 'R';
                        R--;
                    }
                    else if(P > 0){
                        ans[i] = 'P';
                        P--;
                    }
                    else if(S > 0){
                        ans[i] = 'S';
                        S--;
                    }
                }
            }
            // now get all the loses
            for(int i = 0; i < n; i++){
                if(ans[i] == str[i]){
                    if(R > 0){
                        ans[i] = 'R';
                        R--;
                    }
                    else if(P > 0){
                        ans[i] = 'P';
                        P--;
                    }
                    else if(S > 0){
                        ans[i] = 'S';
                        S--;
                    }
                }
            }
            cout << ans << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}