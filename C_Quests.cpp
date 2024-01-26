// link: https://codeforces.com/contest/1914/problem/C
#include <iostream>

using namespace std;

    


int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int q[n], e[n];
        for(int i = 0; i < n; i++){
            cin >> q[i];
        }
        for(int i = 0; i < n; i++){
            cin >> e[i];
        }
        int ans = 0;
        int allowedretries = 0;
        if(k > n){
            allowedretries = k-n;
            k = n;
        }

        int initsum = 0;
        // sum of 0 to i elements of q[n]
        for(int j = 0; j <= k-1; j++){
            initsum += q[j];
        }

        // making an array ecpy which stores the max element of e[n] from 0 to i;
        int ecpy[n];
        int max_e = 0;
        for(int i = 0; i < n; i++){
            if(e[i] > max_e){
                max_e = e[i];
            }
            ecpy[i] = max_e;
        }

        for(int i = k-1; i >= 0; i--){
            int temp_sum = 0;
            temp_sum += initsum;
            initsum -= q[i];

            // finding the max of e[n] from 0 to i;
            int max_e = ecpy[i];

            temp_sum += max_e*allowedretries;
            if(temp_sum > ans){
                ans = temp_sum;
            }
            allowedretries += 1;
        }
        cout << ans << endl;
    }
    return 0;
}
