// Link To Problem : https://codeforces.com/contest/1948/problem/0


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
        if(n%2==1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            char curr = 'A';
            for(int i = 0; i < n; i++){
                if(i%2==0 && i!=0) curr++;
                cout << curr;
            }
            cout << endl;

        }
        
    }
    return 0;
}