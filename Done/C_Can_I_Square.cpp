// Link To Problem : https://codeforces.com/contest/1915/problem/C


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
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        while(n--){
            int x;
            cin >> x;
            sum += x;
        }

        // check if square root of sum is an integer
        int root = sqrt(sum);
        if(root*root == sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}