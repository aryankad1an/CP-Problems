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
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long sum = 0;
        while(n--){
            long long x;
            cin >> x;
            sum += x;
        }

        // check if square root of sum is an integer
        long long root = sqrt(sum);
        if(root*root == sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}