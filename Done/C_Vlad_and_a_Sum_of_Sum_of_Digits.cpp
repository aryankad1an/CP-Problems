// Link To Problem : https://codeforces.com/contest/1926/problem/C
#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int
using namespace std;

int digitSum(int n){
    int sum = 0;
    while(n){
        sum += n%10;
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    int z = 2e5;
    vector<int> sums;
    long acc = 0;
    for(int i =1; i<=2e5 + 1; i++){
        acc += digitSum(i);
        sums.push_back(acc);
    }
    while(t--){
        int n;
        cin >> n;
        cout << sums[n-1] << endl;
    }
    return 0;
}