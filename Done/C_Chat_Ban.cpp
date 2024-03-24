// Link To Problem : https://codeforces.com/problemset/problem/1612/C


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
        int k , x;
        cin >> k >> x;
        int ans = 0;
        int l = 1 , r = 2*k - 1;
        int total = (k * (k + 1)) - k; //k * k
        while(l <= r)
        {
            int mid = (l + r)/2;
            int req = 0;
            if(mid > k)
            {
                int diff = mid - k;
                int val = k - diff;
                req = total - (val * (val + 1))/2; // meth
            }
            else{
                req = (mid * (mid - 1))/2;
            }
                
            if(x > req)
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << endl;
    }
    return 0;
}