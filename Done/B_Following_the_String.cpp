// Link To Problem : https://codeforces.com/contest/1927/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int z;
    cin >> z;
    while(z--){
        int t;
        cin >> t;
        vector<int> v(t);
        for(int i = 0; i < t; i++){
            cin >> v[i];
        }
        map<int, char> m;
        for(int i = 0; i < t; i++){
            m[i] = 'a';
        }
        for(int i = 0; i < t; i++){
            cout << m[v[i]];
            m[v[i]]++;
        }
        cout << endl;
    }
    return 0;
}