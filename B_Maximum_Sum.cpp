// Link To Problem : https://codeforces.com/problemset/problem/1832/B


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
        long n, k;
        cin >> n >> k;
        vector<long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort (a.begin(), a.end());
        int start = 0;
        int end = n-1;
        long sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i];
        }
        while(k > 0){
            // code here
            if(a[start] + a[start+1] >= a[end]){
                // remove end
                sum -= a[end];
                end--;
            }
            else if(k>=2 && a[start] + a[start+1] > a[end-1] && a[start+2] + a[start+3] > a[end] && end - start >= 5){
                // remove 2 ends
                sum -= a[end] + a[end-1];
                end -= 2;
                k--;
                
            }
            else{
                // remove start and start+1
                sum -= a[start] + a[start+1];
                start += 2;
            }
            k--;
        }
        cout << sum << endl;
    }
    return 0;
}