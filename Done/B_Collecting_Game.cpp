// Link To Problem : https://codeforces.com/problemset/problem/1904/B


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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> acp = a;
        sort (acp.begin(), acp.end());
        vector<int> prefix;
        prefix.push_back(acp[0]);
        for (int i = 1; i < n; i++){
            prefix.push_back(prefix[i - 1] + acp[i]);
        }
        map<int, int> hsh;
        for(int i = n-1; i >=0; --i){
            if(i==n-1)hsh[acp[i]] = i;
            else{
                if(prefix[i] >= acp[i+1]){
                    hsh[acp[i]] = hsh[acp[i+1]];
                }
                else{
                    if(!hsh[acp[i]]) hsh[acp[i]] = i;
                }
            }
        }
        for(int i = 0; i < n; i++){
            cout << hsh[a[i]] << " ";
        }
        
        cout << endl;
    }
    return 0;
}