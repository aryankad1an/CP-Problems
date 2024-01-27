// Link To Problem : https://codeforces.com/contest/1915/problem/A


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
        int size = 3;
        int arr[size];
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
        sort(arr, arr+size);
        if(arr[0] == arr[1]){
            cout << arr[2] << endl;
        }
        else{
            cout << arr[0] << endl;
        }

    }
    return 0;
}