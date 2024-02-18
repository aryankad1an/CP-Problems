#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<numeric>
#include<stack>
#include<queue>
#define long long long int
using namespace std;

// Problem: AGGRCOW-> Aggressive cows
// Statement: Given N stalls and C cows, find the largest minimum distance between the cows
// Example: N=5, C=3, stalls={1,2,4,8,9} then the answer is 3 as the cows can be placed at {1,4,8} and the minimum distance is 3

bool predicate(vector<int> &stalls, int cows, int distance){
    int last_cow = stalls[0];
    int count = 1;
    for(int i=1; i<stalls.size(); i++){
        if(stalls[i]-last_cow>=distance){
            last_cow = stalls[i];
            count++;
        }
        if(count==cows) return true;
    }
    return false;
}

int main(){

    return 0;
}