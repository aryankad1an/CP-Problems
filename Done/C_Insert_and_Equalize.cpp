// Link To Problem : https://codeforces.com/contest/1902/problem/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#include<numeric>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        
        vector<long> v(n);
        for (long i = 0; i < n;i++){
            cin >> v[i];
        }
        if(n==1){
            cout << 1 << endl;
            continue;
        }
        // max element of vector returned
        long max = *max_element(v.begin(), v.end());
        vector<long> diff(n);
        for (long i = 0; i < n; i++)
        {
            diff[i] = (max - v[i]);
        }

        // finding gcd of all elements of diff vector
        long gcd = diff[0];
        // time complexity of __gcd() is O(log(min(a,b)))
        for (long i = 1; i < n; i++)
        {
            gcd = __gcd(gcd, diff[i]);
        }
        // cout << gcd << endl;

        long ans = 0;
        long a1 = 0;
        // sort the vector
        sort(diff.begin(), diff.end());
        for(long i: diff){
            ans += i/gcd;
            if(i/gcd == a1){
                a1++;
            }
        }
        cout << ans + a1 << endl;

    }
    return 0;
}