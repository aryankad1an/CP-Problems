// Link To Problem : https://codeforces.com/problemset/problem/1874/A


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long k;
    cin >> k;
    while(k--){
        long n, m, t;
        cin >> n >> m >> t;
        vector<long> a(n);
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<long> b(m);
        for (long i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());


        // first move, swap a[0] with b[m-1]
        if(a[0] < b[m-1]) swap(a[0], b[m-1]);
        t--;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        // second move, swap a[n-1] with b[0]
        if(t>0){
            if(a[n-1] > b[0]){
                swap(a[n-1], b[0]);
                sort(a.begin(), a.end());
                sort(b.begin(), b.end());
            }
            t--;
        }
        
        // now cyclic moves
        if(t%2==0){
            long sum = 0;
            for (long i = 0; i < n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
        else{
            if(b[m-1] > a[0]){
                swap(b[m-1], a[0]);
            }
            long sum = 0;
            for (long i = 0; i < n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
        
    }
    
    return 0;
}