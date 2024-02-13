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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        // remove duplicates
        a.resize(unique(a.begin(), a.end()) - a.begin());
        int pnt = 0, ans = 0;
        for (int i = 0; i < a.size(); i++) {
            while(a[i] - a[pnt] >= n) {
                pnt++;
            }
            ans = max(ans, i - pnt + 1);
        }
        cout << ans << endl;     
    }
    return 0;
}