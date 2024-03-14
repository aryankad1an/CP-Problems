// Link To Problem : https://www.codechef.com/START125B/problems/BILM


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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int count1 = count(s.begin(), s.end(), '1');
        int count0 = count(s.begin(), s.end(), '0');

        if(k > count1){
            // remove all 1's
            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    s[i] = ' ';
                }
            }
            k-= count1;
            // remove k 0's
            for(int i = n-1; i >= 0; i--){
                if(k == 0) break;
                if(s[i] == '0'){
                    s[i] = ' ';
                    k--;
                }
            }
            for(int i = 0; i < n; i++){
                if(s[i] != ' ') cout << s[i];
            }
            cout << endl;
        }
        else if(k==count1){
            // remove all 1's
            for(int i = 0; i < n; i++){
                if(s[i] == '1'){
                    s[i] = ' ';
                }
            }
            for(int i = 0; i < n; i++){
                if(s[i] != ' ') cout << s[i];
            }
            cout << endl;
        }
        else{
            // replace all ones with 0's except last one
            for(int i = 0; i < n && k; i++){
                if(i < n-1 && s[i] == '1'){
                    s[i] = '0';
                    k--;
                }
            }
            
            for(int i = 0; i < n; i++){
                if(s[i] != ' ') cout << s[i];
            }
            cout << endl;
        }
    }
    return 0;
}