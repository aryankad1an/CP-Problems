// Link To Problem : https://codeforces.com/problemset/problem/1827/A


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
        long n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort (a.rbegin(), a.rend());
        sort (b.rbegin(), b.rend());
                                

        long i = 0, j = 0, li = 0, ans = 1;
        while(j<n){
            if(a[i] > b[j] && i < n){
                i++;
            }
            else{
                ans = (ans * (i-li)) % 1000000007;
                li++;
                j++;
            }
        }
        cout << ans << endl;

    }
    return 0;
}