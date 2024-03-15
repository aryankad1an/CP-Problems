// Link To Problem : https://codeforces.com/problemset/problem/1671/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        sort (a.begin(), a.end());
        vector<int> prefix(n);
        prefix[0] = a[0];
        for (int i = 1; i < n; ++i){
            prefix[i] = prefix[i - 1] + a[i];
        }
        // handling an edge case
        if(x-prefix[0] < 0){
            cout << 0 << endl;
            continue;
        }
        vector<int> answer;
        int highest = 0;
        for(int i=n-1;i>=0;--i){
            if(x-prefix[i] < 0){
                continue;
            }
            if(!highest) highest = i+1;
            answer.push_back((x-prefix[i])/(i+1)+1);
        }
 
        int realans = 0;
        int tosub = 0;
        for(int i=0;i<answer.size();++i){
             realans+=(answer[i]-tosub)*highest;
             highest--;
             tosub = answer[i];
        }
        cout << realans << endl;
    }
    return 0;
}