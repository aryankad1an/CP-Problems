// Link To Problem : https://codeforces.com/contest/1899/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<climits>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            v.push_back(x);
        }
        
        // sort vector v
        sort(v.begin(), v.end());
        
        int temp = v[v.size()-1] - v[0];
        int ans = temp;
        for(int i = 1; i < n/2 ; i++){
            temp += v[v.size()-1-i] - v[i];
            if(temp > ans) ans = temp;
        }
        cout << ans << endl;
    }
    return 0;
}