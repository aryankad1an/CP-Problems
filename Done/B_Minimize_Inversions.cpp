// Link To Problem : https://codeforces.com/contest/1918/problem/B


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
        int a[n], b[n];
        for(int i=0; i<n; i++) cin >> a[i];
        for(int i=0; i<n; i++) cin >> b[i];
      

        vector<pair <int, int> > v;
        for(int i=0; i<n; i++){
            v.push_back(make_pair(a[i]+b[i], b[i]));
        }
        sort(v.begin(), v.end(),[](const std::pair<int, int>& a, const std::pair<int, int>& b) {
        return a.first < b.first;});
        for (int i = 0; i < n; i++)
        {
            cout << v[i].first - v[i].second <<" ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << v[i].second << " ";
        }
        cout << endl;
        



    }
    return 0;
}