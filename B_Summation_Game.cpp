
#include <iostream>
#include<climits>
#include<vector>
#include<algorithm>

using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, r, m;
        cin >> n >> r >> m;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        
        int minus = 0;
        for(int i = n-m; i < n; i++) {
            minus += 2*a[i];
        }

        vector<int> sums;
        int instancesum = sum - minus;
        sums.push_back(instancesum);
        int deltaplus = 0;
        if(r >= n){
            sums.push_back(0);
        }
        if(r == n && n == m){
            cout << 0 << endl;
            continue;
        }
        if(n-m-1 >= 0){
            for(int i = n-m-1; i >= 0 && r>0; i--,r--) {
                deltaplus = a[i+m] - 2*(a[i]);
                instancesum += deltaplus;
                sums.push_back(instancesum);
                // remove i+m th element
                a.erase(a.begin() + i + m, a.begin() + i + m + 1);
            }
            
        }
        
        if(r>0){
            while(r--){
                auto maxElement = std::max_element(a.begin(), a.end());
                int index = std::distance(a.begin(), maxElement);
                int max = *maxElement;
                
                // erase max element
                a.erase(a.begin() + index, a.begin() + index + 1);
                instancesum += max;
                sums.push_back(instancesum);
            }
        }
        
        // max element of array sums
        int max = *std::max_element(sums.begin(), sums.end());
        cout << max << endl;
        



    }
    return 0;
}
