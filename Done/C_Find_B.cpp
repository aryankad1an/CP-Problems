// Link To Problem : https://codeforces.com/contest/1923/problem/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>

#define long long long int

using namespace std;
long sum(long size){
    return (size/2) + (size - size/2)*2;
}
int main(){
    long t;
    cin >> t;
    while(t--){
        long n, k;
        cin >> n >> k;
        vector<long> a(n);
        vector<long> prefix(n, 0);
        for(long i = 0; i < n; i++){
            cin >> a[i];
        }
        prefix[0] = a[0];
        for(long i = 1; i < n; i++){
            prefix[i] = prefix[i-1] + a[i];
        }


        while(k--){
            long l, r;
            cin >> l >> r;
            l--; r--;
            long s = prefix[r] - prefix[l] + a[l];
            long size = r-l+1;

            if(sum(size) <= s && size != 1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }

    }
    return 0;
}