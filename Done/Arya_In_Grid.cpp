// Link To Problem : https://www.codechef.com/problems/ARYAGRID


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
        long n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;
        long x1 = n - x;
        long y1 = m - y;
        int cnt = 0;
        if(x%l ==0) x--;
        if(y%l ==0) y--;
        long udown = (x/l+x1/l) + 1;
        long side = (y/l+y1/l) + 1;
        cout << udown * side   << endl;
    }
    return 0;
}