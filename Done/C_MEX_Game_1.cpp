// Link To Problem : https://codeforces.com/contest/1944/problem/C


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
        cin>>n;
        vector<int> a(n);
        map<int, int> hsh;
        for(int i=0;i<n;i++){
            cin>>a[i];
            hsh[a[i]]++;
        }
        sort(a.begin(), a.end());
        if(a[0]!=0){
            cout << 0 << endl;
            continue;
        } 
        int curr = 1;
        int w = 0;
        if(hsh[0]==1) w++;
        for(int i = 1; i < n; i++){
            if(i < n-1 && a[i] == a[i+1] && a[i] == curr){
                curr++;
            }
            else if(i<n-1 && w==0 && a[i] == curr && a[i] != a[i+1]){
                curr++;
                w++;
            }
            else if(i == n-1 && w == 0 && a[i] == curr){
                curr++;
            }
        }
        cout << curr << endl;
        
    }
    return 0;
}