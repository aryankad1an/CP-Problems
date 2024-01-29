// Link To Problem : https://www.hackerrank.com/challenges/crush/problem
// We Start with an array of zeros and we have to perform n operations on it

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int
const int N = 1e7+10;
long arr[N];

using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    while(m--){
        int a, b, d;
        cin >> a >> b >> d;
        for (int i = a; i <= b; i++)
        {
            arr[i] += d;
        }
    }
    long max = -1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}