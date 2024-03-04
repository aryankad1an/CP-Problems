// Link To Problem : https://codeforces.com/problemset/problem/1874/A


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        long n, m, k;
        cin >> n >> m >> k;
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
        k--;
        if(k%2==0){
            // cout sum of elements of a
            long sum = 0;
            for (long i = 0; i < n; i++)
            {
                sum += a[i];
            }
            cout << sum << endl;
        }
        else{
            // swap b[m] with a[0] 
            swap(b[m-1], a[0]);
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