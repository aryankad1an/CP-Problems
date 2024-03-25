// Link To Problem : https://codeforces.com/problemset/problem/1820/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int unsigned long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int count0 = 0, count1 = 0;
        for (auto c: s){
            if(c=='0') count0++;
            else count1++;
        }
        if(count0 == 0){
            cout << (int) s.size()*1ll*s.size()*1ll << endl;
            continue;
        }
        if(count1 == 0) {
            cout << 0 << endl;
            continue;
        }
        int maxi = 0;
        vector<int> maxes;
        int n = s.size();
        for(int i = 0; i < n; ++i){
            if(s[i] == '1') maxi++;
            else{
                maxes.push_back(maxi);
                maxi = 0;
            }
        }
        maxes.push_back(maxi);
        if(s[0] != 0  && s[n-1] != 0) maxes.push_back(maxes[0] + maxes[maxes.size()-1]);
        
        int dp = *max_element(maxes.begin(), maxes.end());

        if(dp%2==0) cout << (dp/2)*((dp/2)+1) << endl;
        else cout << ((dp/2)+1)*((dp/2)+1) << endl;
        

    }
    return 0;
}