// Link To Problem : https://codeforces.com/contest/1925/problem/A


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
        int n, k;
        cin >> n >> k;
        string s = "";
        for(int i = 0; i < n; i++){
            for(int i = 0; i < k; i++){
                s += 'a'+i;
            }
        }
        cout << s << endl;
        
    }
    return 0;
}