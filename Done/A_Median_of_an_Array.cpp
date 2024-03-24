// Link To Problem : 


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort (a.begin(), a.end());
        int mid;
        if(n%2==0) mid = (n/2)-1;
        else mid = n/2;

        // check no of equal elements after mid
        // for(int i: a){
        //     cout << i << " ";
        // }
        // cout << endl;
        int count = 1;
        for (int i = mid; i < n-1; ++i){
            if(a[i] == a[i+1]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }
    return 0;
}