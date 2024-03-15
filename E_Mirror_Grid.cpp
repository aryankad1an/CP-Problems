// Link To Problem : https://codeforces.com/problemset/problem/1703/E


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
vector<string> rotateStringMatrixBy90Deg(vector<string> mat){
    
    int n = mat.size();
    vector<string> res(n, string(n, ' '));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            res[j][n - i - 1] = mat[i][j];
        }
    }
    return res;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<string> s(n);
        for(int i = 0; i < n; i++){
            cin >> s[i];
        }
        vector<string> s1 = rotateStringMatrixBy90Deg(s);
        for(int i = 0; i < n/2; i++){
            string work1 = s[i];
            string work2 = s[n - i - 1];
            string work3 = s1[i];
            string work4 = s1[n- i - 1];
            // truncate first and last 'i' characters of all the 4 working strings
            work1 = work1.substr(i, n - (2 * i));
            work2 = work2.substr(i, n - (2 * i));
            work3 = work3.substr(i, n - (2 * i));
            work4 = work4.substr(i, n - (2 * i));

            
            
        }

    }
    return 0;
}