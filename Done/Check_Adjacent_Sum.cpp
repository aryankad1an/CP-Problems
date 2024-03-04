// Link To Problem : https://www.codechef.com/START123B/problems/CHECKADJSUM


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
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        int dawg = 2*sum;
        while(q--){
            int x;
            cin >> x;
            int toFindSum = dawg - x;
            vector<int> ans;
            bool flag = false;
            // check if sum of any 2 elements are equal to toFindSum or not
            for(int i = 0; i < n; i++){
                for(int j = i+1; j < n; j++){
                    if(a[i] + a[j] == toFindSum){
                        ans.push_back(i);
                        ans.push_back(j);
                        flag = true;
                        break;
                    }
                }
                if(flag) break;
            }
            if(flag){
                cout << a[ans[0]] << " ";
                for(int i = 0; i < n; i++){
                    if(i == ans[0] || i == ans[1]) continue;
                    cout << a[i] << " ";
                }
                cout << a[ans[1]] << endl;
            }
            else cout << -1 << endl;
        }
        
    }
    return 0;
}