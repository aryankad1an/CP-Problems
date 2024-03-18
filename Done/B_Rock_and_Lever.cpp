// Link To Problem : https://codeforces.com/problemset/problem/1420/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vp;
        for (int i = 0; i < n; i++){
            int t;
            cin >> t;
            t = log2(t)+1;
            vp.push_back(t);
        }
        sort (vp.begin(), vp.end());
        int sum = 0;
        int temp =1;
        for(int i = 0; i < n-1; ++i){
            if(vp[i] == vp[i+1]){
                temp++;
            }
            else{
                sum += (temp*(temp-1))/2;
                temp = 1;
            }
        }
        sum += (temp*(temp-1))/2;
        cout << sum << endl;

    }
    return 0;
}