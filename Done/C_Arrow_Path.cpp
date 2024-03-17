// Link To Problem : https://codeforces.com/contest/1948/problem/C


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
        string a, b;
        cin >> a >> b;
        bool cond1 = true;
        bool cond2 = true;
        vector<int> indices;
        indices.push_back(-1);

        for(int i=1;i<n-1;i+=2){
            if(a[i] == '>') {
                indices.push_back(i);
            }
        }
        for(int i=0;i<n-1;i+=2){
            if(b[i] == '>') {
                indices.push_back(i);
            }
        }
        if(b[n-2] == '<'){
            cout << "NO" << endl;
            continue;
        }
        
        indices.push_back(n);
        sort(indices.begin(), indices.end());
        // max difference between indices should not be greater than 2
        int maxgap = 0;
        for(int i = 0; i < indices.size()-1; ++i){
            int diff = indices[i+1]-indices[i];
            maxgap = max(diff, maxgap);
        }
        
        if(maxgap > 2) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}