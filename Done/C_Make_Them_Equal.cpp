// Link To Problem : https://codeforces.com/problemset/problem/1594/C


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
        int n; char c;
        cin >> n >> c;
        string s;
        cin >> s;
        vector<int> pos;
        for(int i = 0; i < n; ++i){
            if(s[i] != c) pos.push_back(i+1);
        }
        if(pos.size() == 0){
            cout << 0 << endl;
            continue;
        }
        if(pos[pos.size()-1] != n){
            cout << 1 << endl;
            cout << n << endl;
            continue;
        }
        int niga = n;
        for(int i = pos.size()-1; i >= 0 ; --i){
            if(pos[i] == niga){
                niga--;
            }
        }
        bool flag = false;
        if(niga==0){
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
            continue;
        }
        for(int i: pos){
            if(i%niga == 0){
                flag = true;
            }
        }
        if(flag){
            cout << 2 << endl;
            cout << n-1 << " " << n << endl;
        }
        else{
            cout << 1 << endl;
            cout << niga << endl;
        }


    }
    return 0;
}