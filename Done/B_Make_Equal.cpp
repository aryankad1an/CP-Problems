// Link To Problem : https://codeforces.com/contest/1931/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        int sum = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        int z = sum/n;
        bool flag = true;
        int acc = 0;
        for (int i=n-1; i>=0; i--){
            acc += a[i];
            if(ceil((acc*1.0/(n-i))) > z){
                flag = false;
                break;
            }
        }
        if(!flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}