// Link To Problem : https://codeforces.com/problemset/problem/1729/D


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
        int n;
        cin >> n;
        vector<int> cost(n);
        vector<int> aukaat(n);
        for(int i = 0; i < n; i++){
            cin >> cost[i];
        }
        for(int i = 0; i < n; i++){
            cin >> aukaat[i];
        }
        vector<int> work(n);
        for(int i = 0; i < n; i++){
            work[i] = aukaat[i]-cost[i];
        }
        sort (work.begin(), work.end());
        int start = 0;
        int end = work.size()-1;
        int ans = 0;
        while(start < end){
            if(work[start] + work[end] >= 0){
                // cout << work[start] << " " << work[end] << endl;
                ans ++;
                start++;
                end--;
            }
            else{
                start++;
            }
        }
        cout << ans << endl;

    }
    return 0;
}