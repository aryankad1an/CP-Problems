// Link To Problem : https://codeforces.com/problemset/problem/1873/E


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int waterAmount(vector<int> &a, vector<int> &pre, int h){
    // find the index whose value lesser than or equal to h
    int n = a.size();
    auto it = lower_bound(a.begin(), a.end(), h) - a.begin();
    if(a[it] > h) it--;
    if(it < 0) return 0;
    if(it == n) it--;
    return (h*n) - (pre[it] + h*(n-it-1));

}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<int> pre(n);
        pre[0] = a[0];
        for(int i = 1; i < n; ++i){
            pre[i] = pre[i-1] + a[i];
        }
        
        int start = 1, end = 10e9;
        while(start < end){
            int mid = (start+end)/2;
            if(waterAmount(a, pre, mid) > x) end = mid;
            else start = mid+1;
        }
        // cout << start << endl;
        
        if(waterAmount(a, pre, start) > x) start--;

        cout << start << endl;
        // cout << waterAmount(a, pre, 3) << endl;
        
        

    }
    
    return 0;
}