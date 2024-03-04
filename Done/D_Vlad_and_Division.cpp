// Link To Problem : https://codeforces.com/contest/1926/problem/D


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
bool binarySearch(vector<long> a, long n, long x){
    long l = 0, r = n-1;
    while(l <= r){
        long mid = (l+r)/2;
        if(a[mid] == x){
            return true;            
        }
        else if(a[mid] < x){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }
    return false;
}
int main(){
    long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        vector<long> a(n);
        map <long, long> mp;
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort (a.begin(), a.end());
        long ans = n;
        long ctr = 0;

        for (long i = 0; i < n; i++)
        {
            long compliment = (~a[i]) & ((1 << 31) - 1);
            if(binarySearch(a, n, compliment)){
                ctr++;
                if(mp[a[i]] > 1){
                    ctr -= mp[a[i]];
                }
            }

        }
        cout << ans - ctr << endl; 
    }

    return 0;
}