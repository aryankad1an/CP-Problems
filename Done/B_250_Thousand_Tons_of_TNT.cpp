// Link To Problem : https://codeforces.com/problemset/problem/1899/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
vector<int> divisors(int n){
    vector<int> div;
    for(int i = 1; i*i <= n; ++i){
        if(n%i==0) div.push_back(i);
        if(i != n/i && n%i==0) div.push_back(n/i);
    }
    return div;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
        }
        vector<int> d= divisors(n);
       
        int answ = 0;
        for(int k: d){
            vector<int> ans;
            int temp = 0;
            int t = 0;
            for(int i = 0; i < n; ++i){
                temp+=a[i];
                t++;
                if(t==k){
                    ans.push_back(temp);
                    temp = 0;
                    t = 0;
                } 
            }
            sort(ans.begin(), ans.end());
            answ = max(answ, ans[ans.size()-1] - ans[0]);
        }
        cout << answ << endl;

    }
    return 0;
}