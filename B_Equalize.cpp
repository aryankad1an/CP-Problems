// Link To Problem : https://codeforces.com/problemset/problem/1928/B


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
        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(),a.end());
        // remove duploicates
        a.erase(unique(a.begin(),a.end()),a.end());
        int ans = 0, min = a[0];
        for (int i = 0; i < a.size(); i++)
        {
            // *PENDING IMPLEMENTATION
            if(a[i] < n){
                ans ++;
            }
        }
        cout << ans << endl;        
    }
    return 0;
}