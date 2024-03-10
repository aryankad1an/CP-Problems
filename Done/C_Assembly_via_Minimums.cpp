// Link To Problem : https://codeforces.com/problemset/problem/1857/C


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
        int z = n*(n-1)/2;
        map<int,int> hsh;
        vector<int> ans;
        for(int i = 0; i < z; i++){
            int x;
            cin >> x;
            hsh[x]++;
        }
        int dp = n-1;
        for(auto i : hsh){
            int cnt = 0;
            while(i.second){
                i.second -= dp;
                dp = dp-1;
                cnt++;
            }
            while(cnt--){
                ans.push_back(i.first);
            }
        }
        for(int i = 0; i < n-1; i++){
            cout << ans[i] << " ";
        }
        cout << *max_element(ans.begin(),ans.end()) << endl;

    }
    return 0;
}   