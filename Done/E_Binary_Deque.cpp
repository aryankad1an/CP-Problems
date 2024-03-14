// Link To Problem : https://codeforces.com/problemset/problem/1692/E


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<climits>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, r;
        cin >> n>> r;
        vector<int> a(n);
        vector<int> indicesof1;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1){
                indicesof1.push_back(i);
            }
        }
        vector<int> rarr(n, 0);
        vector<int> larr(n, 0);
        
        for (int i = 0; i < n; i++){
            if(a[i] == 1) larr[i] = i;
            else if(i==0) larr[i] = -1;
            else larr[i] = larr[i-1];  
        }
        for (int i = n-1; i >=0 ; --i){
            if(a[i] == 1) rarr[i] = i;
            else if(i==n-1) rarr[i] = n;
            else rarr[i] = rarr[i+1];
        }

        
        int ans = INT_MAX;
        for(int i = 0; i < (int)indicesof1.size()-r+1; i++){
            int l1 = indicesof1[i];
            int r1 = indicesof1[i+r-1];

            int dawg3 = 0;
            if(l1 > 0) dawg3+=larr[l1-1]+1;
            if(r1 < n-1) dawg3+=n-rarr[r1+1];
            ans = min(ans, dawg3);
        }

        if((int) indicesof1.size() < r){
            cout << -1 << endl;
            continue;
        }
        cout << ans  << endl;
        
    }
    return 0;
}