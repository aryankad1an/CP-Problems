// Link To Problem : https://www.codechef.com/START126B/problems/TRISWP


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
        n = s.size();
        set<string> distinct;
        vector<string> dis;
        int count = 0;
        string last = "";
        for(int i = 0; i < n-3; ++i){
            if(i==n-3) break;
            string tmp = "";
            tmp.push_back(s[i]);
            tmp.push_back(s[i+1]);
            tmp.push_back(s[i+2]);
            tmp.push_back(s[i+3]);
            string tmp2 = tmp;
            tmp[0] = s[i+1];
            tmp[1] = s[i+2];
            tmp[2] = s[i];
            
            

            tmp2[1] = s[i+2];
            tmp2[2] = s[i+3];
            tmp2[3] = s[i+1];
            if(tmp != tmp2){
                count++;
            }
            // cout << tmp << " " << tmp2 << endl;
        }
        bool flag = false;
        for(int i = 0; i < n-3; ++i){
           
            if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2]!=s[i+3] && flag){
                count--;
            }
            if(s[i] == s[i+1] && s[i+1] == s[i+2] && s[i+2]!=s[i+3]){
                flag = true;
            }
            
        }
        if(s[n-1] == s[n-2] && s[n-2] == s[n-3] && flag){
            count--;
        }
        cout << count+1 << endl;


        // for(int i = 0; i < n-2; ++i){
        //     string scp = s;
        //     // circlular left shift i, i+1 and i+2 chars
        //     scp[i] = s[i+1];
        //     scp[i+1] = s[i+2];
        //     scp[i+2] = s[i];
        //     distinct.insert(scp);
        //     dis.push_back(scp);
        //     count++;
        // }

        // for(int i = 0; i < n-3; ++i){
        //     if(s[i] == s[i+1] && s[i+1] == s[i+3]){
        //         count--;
        //     }
        //     else if(s[i] == s[i+1] && s[i+1] == s[i+2] ){
        //         count--;
        //     }
        // }
        // for(auto i: dis){
        //     cout << i << " ";
        // }
        // cout << endl;
        // for(auto i: distinct){
        //     cout << i << " ";
        // }
        // cout << endl;
        // cout << endl;
    }
    return 0;
}