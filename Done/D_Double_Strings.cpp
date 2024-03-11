// Link To Problem : https://codeforces.com/contest/1703/problem/D


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
        vector<string> strs;
        map<string, int> hsh;
        for (int i = 0; i < n; i++){
            string s;
            cin >> s;
            strs.push_back(s);
            hsh[s]++;
        }
        for(int i = 0; i < n; i++){
            string tmp = strs[i];
            string tmpa, tmpb;
            bool didfound = false;
            for(int i = 0; i < (int) tmp.size(); i++){
                tmpa = tmp.substr(0, i);
                tmpb = tmp.substr(i, (int) tmp.size() - i);
                if(hsh[tmpa] > 0 && hsh[tmpb] > 0){
                    cout << 1;
                    didfound = true;
                    break;
                }
            }
            if(!didfound) cout << 0;
        }
        cout << endl;

    }
    return 0;
}