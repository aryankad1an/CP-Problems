// Link To Problem : https://www.codechef.com/START125B/problems/ATBO


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
        vector<int> b(n);
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum1 += a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            sum2 += b[i];
        }
  
        for(int i = 0; i <= n-4; i++){
            int a1 = a[i];
            int b1 = a[i+1];
            int c1 = a[i+2];
            int d1 = a[i+3];

            long long dawg = b1+c1;

            int tocover = b[i] - a[i];
            if(tocover == 0) continue;

            if(tocover == dawg) {
                a[i] = b[i];
                a[i+1] = -c1;
                a[i+2] = -b1;
                a[i+3] += (c1+b1);
            }
            else{
                break;
            }    
        }

        // check if a and b are equal
        bool flag = true;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                flag = false;
                break;
            }
        }
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}