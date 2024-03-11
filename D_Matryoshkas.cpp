// Link To Problem : https://codeforces.com/problemset/problem/1790/D


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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        cout << endl;
        vector<int> a1;
        vector<int> duplicates;
        for(int i = 0; i < n; i++){
            if(i == 0 || a[i] != a[i - 1]){
                a1.push_back(a[i]);
            }else{
                duplicates.push_back(a[i]);
            }
        }
        cout << "------------------------" << endl;
        for(auto i: a1){
            cout << i << " ";
        }
        cout << endl;
        for(auto i: duplicates){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}