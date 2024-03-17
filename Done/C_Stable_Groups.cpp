// Link To Problem : https://codeforces.com/problemset/problem/1539/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int n, k, x;
    cin >> n >> k >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<int> diff;
    for(int i = 1; i < n; i++){
        diff.push_back(a[i] - a[i-1]); 
    }
    int cnt = 1;
    sort(diff.begin(), diff.end());
    // for (int i = 0; i < diff.size(); i++)
    // {
    //     cout << diff[i] << " ";
    // }
    // cout << endl;
   
    for(int i = 0; i < diff.size(); i++){
        if(diff[i] > x){
            int niga = diff[i] - 1;
            int niga2 = niga / x;
            if(k >= niga2){
                k -= niga2;
                continue;
            }
           
            if(diff[i] > x){
                cnt++;
            }
        }
        
    }

    cout << cnt << endl;
    return 0;
}