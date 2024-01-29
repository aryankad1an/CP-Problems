// Link To Problem : https://www.codechef.com/JAN15/problems/GCDQ


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
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        // using 1 based indexing
        int A[n+1];
        for(int i=1;i<=n;i++){
            cin>>A[i];
        }
        // creating a prefix gcd array lol
        int prefix[n+1];
        prefix[0] = 0;
        prefix[1] = A[1];
        for(int i=2;i<=n;i++){
            prefix[i] = __gcd(prefix[i-1], A[i]);
        }

        // creating a suffix gcd array
        int suffix[n+1];
        suffix[n] = A[n];
        for(int i=n-1;i>=1;i--){
            suffix[i] = __gcd(suffix[i+1], A[i]);
        }
        while(q--){
            int l, r;
            cin>>l>>r;
            // we have to exclude the elements at index l to r(inclusive)

            int gc = 0;
            // we will find the gcd of all the elements except the elements at index l to r
            
            // we will find the gcd of all the elements from 1 to l-1
            gc = prefix[l-1];
            // we will find the gcd of all the elements from r+1 to n
            gc = __gcd(gc, suffix[r+1]);
            cout<<gc<<endl;
        }
    }

    return 0;
}