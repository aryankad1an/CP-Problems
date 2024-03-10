// Link To Problem : https://codeforces.com/problemset/problem/1832/C


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
        // step 1: remove consecutive duplicates
        vector<int> b;
        for(int i = 0; i < n; i++){
            if(i == 0 || a[i] != a[i - 1]){
                b.push_back(a[i]);
            }
        }
        // handling edge case
        if(b.size() == 1){
            cout << 1 << endl;
            continue;
        }

        vector<int> ans;
        for(int i = 0; i < (int)b.size(); i++){
            if(i == 0 || i == (int)b.size() - 1){
                ans.push_back(b[i]);
                continue;
            }else if(b[i - 1] > b[i] && b[i] < b[i + 1]){
                ans.push_back(b[i]);
            }else if(b[i - 1] < b[i] && b[i] > b[i + 1]){
                ans.push_back(b[i]);
            }
        }
        cout << ans.size() << endl;
        

    }
    return 0;
}