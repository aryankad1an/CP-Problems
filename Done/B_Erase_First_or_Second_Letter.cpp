// Link To Problem : https://codeforces.com/problemset/problem/1917/B


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
        cin>>s;
        set<int> st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
        }
        int ans = 0;
        for(int i=0; i<s.size(); i++){
            // check if s[i] is in set
            if(st.find(s[i])!=st.end()){
                ans += (n-i);
                st.erase(s[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}