// Link To Problem : https://codeforces.com/contest/1917/problem/A


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
        vector<int> a(n);
        bool flag = false;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 0){
                flag = true;
            }
        }
        if(flag){
            cout << 0 << endl;
            continue;
        }
        int no_of_negatives_in_a = 0;
        for(int i = 0; i < n; i++){
            if(a[i] < 0){
                no_of_negatives_in_a++;
            }
        }
        if(no_of_negatives_in_a == 0){
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
        else if(no_of_negatives_in_a %2 == 0){
            cout << 1 << endl;
            cout << 1 << " " << 0 << endl;
        }
        else{
            cout << 0 << endl;

        }
    }
    return 0;
}