// Link To Problem : https://codeforces.com/problemset/problem/1221/C


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
        int c, m, x;
        cin >> c >> m >> x;
        int ans = 0;
        if(c&&m&&x){
            int tmp = min(c, min(m, x));
            ans += tmp;
            c -= tmp;
            m -= tmp;
            x -= tmp;
        }
        // cout << c << " " << m << " " << x << endl;
        // cout << ans << endl;
        // int tmp;

        /* real ques begins here */
        cout <<ans+ min(c, min(m, (c+m)/3)) << endl;

      

        
    }
    return 0;
}