// Link To Problem : https://codeforces.com/contest/1941/problem/B


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
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        for(int i = 1; i < n-1; ++i){
            if(arr[i] >= arr[i-1]*2 && arr[i+1] >= arr[i-1]) {
                arr[i] -= arr[i-1]*2;
                arr[i+1] -= arr[i-1];
                arr[i-1] = 0;
            }
        } 
        bool check_all_zero = true;
        for(int i = 0; i < n; i++){
            // cout << arr[i] << " ";
            if(arr[i] != 0){
                check_all_zero = false;

            }
            
        }

        if(check_all_zero){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}