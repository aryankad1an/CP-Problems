// Link To Problem : https://codeforces.com/contest/1914/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cassert>

using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for(int i = n-k; i >= 1; i--){
            cout << i << " ";
        }
        for(int i = n-k+1; i <= n; i++){
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}