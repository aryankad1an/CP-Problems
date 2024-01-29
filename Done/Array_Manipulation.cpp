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
        // causes TLE
        // for (int i = a; i <= b; i++)
        // {
        //     arr[i] += d;
        // }

        // Optimized Solution
        arr[a] += d;
        arr[b+1] -= d;
    }
    /*
    Concept Used:

    0 0 0 0 0 : Initial Array
    2 4 5 : Operation 1
    0 5 5 5 0 : After Operation 1 (1 based indexing)
    Now this array can be represented as
    0 5 0 0 -5
    Prefix Array of the above array is 
    0 5 5 5 0 which returns the same array after performing the operation
    */

    // changing the array to prefix array
    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i-1];
    }
    // finding the maximum element in the array
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