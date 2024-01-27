// Link To Problem : https://codeforces.com/contest/1915/problem/E


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
        // logic: if 2 prefix sums are same, then the subarray between them has sum 0

        // To Find : a1 + a3 + a5 .. = a2 + a4 + a6 ..
        // Which is: a1 - a2 + a3 - a4 + a5 - a6 .. = 0
        // thus we need to find prefix sum array of this array with alternating signs
        // if any 2 prefix sums are same, then the subarray between them has sum 0 (proovable)
    }
    return 0;
}