// Link To Problem : https://codeforces.com/contest/1946/problem/B


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
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            sum = (sum + a[i]) % 1000000007;
        }

        int maxSum = 0;
        int tmp = 0;
    
        for(int i = 0 ; i<n; ++i){
            // tmp += a[i];
            // maxSum = max(tmp, maxSum);
            // if(tmp <0) tmp = 0;

            if(tmp + a[i+1] < 0 ) {
                maxSum = max(maxSum, tmp);
                if(a[i+1] > 0) tmp = a[i+1];
                else tmp = 0;
            }
            else{
                maxSum = max(maxSum, tmp);
                tmp += a[i+1];
            }
        }

        // cout << endl;
        maxSum = max(maxSum, tmp);
        // cout << maxSum << endl;
        // cout << sum << endl;
        while(k--){
            sum = (sum + maxSum) % 1000000007;
            maxSum = (maxSum * 2) % 1000000007;
        }

        // cout << sum << endl;
        // handle if sum is negative
        if(sum < 0){
            sum = 1000000007 + (sum % 1000000007);
        }
        cout << sum % 1000000007 << endl;

    }
    return 0;
}