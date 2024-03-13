// Link To Problem : https://codeforces.com/problemset/problem/1704/C


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
        int n, m;
        cin >> n >> m;
        vector<int> infected(m);
        for(int i = 0; i < m; i++){
            cin >> infected[i];
        }
        sort(infected.begin(), infected.end());
        vector<int> work;
        for(int i = 0; i < m; i++){
            if(i == m-1) work.push_back(n-infected[i] + infected[0]-1);
            else work.push_back(infected[i+1] - infected[i]-1);
        }
        sort(work.rbegin(), work.rend());
        int acc = 0;
        long ans = 0;
        for(int i = 0; i < (int) work.size(); i++){
            if(work[i] - acc > 1) ans += work[i] - acc - 1;
            else if(work[i] - acc == 1) ans++;
            acc += 4;
        }
        cout << n-ans << endl;
    }
    return 0;
}