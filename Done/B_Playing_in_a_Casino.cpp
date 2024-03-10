// Link To Problem : https://codeforces.com/problemset/problem/1808/B


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
        long m, n;
        cin >> n >> m;
        long a[n][m];
        for(long i = 0; i < n; i++){
            for(long j = 0; j < m; j++){
                cin >> a[i][j];
            }
        }
        long ans = 0;
        
        for(long i = 0; i < m; i++){
            long weight = n-1;
            vector<long> temp;
            for(long j = 0; j < n; j++){
                temp.push_back(a[j][i]);
            }
            sort(temp.rbegin(), temp.rend());
            for(long j = 0; j < n; j++){
                ans += temp[j]*weight;
                weight -= 2;
            }
        }
        cout << ans << endl;
        
    }
    return 0;
}