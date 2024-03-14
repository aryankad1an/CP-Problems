// Link To Problem : https://codeforces.com/problemset/problem/1848/B


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
    while(t--)
    {
        int n, c;
        cin >> n >> c;
        map<int, vector<int>> indexes;
        /*RAW DOG APPROACH*/
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            indexes[x].push_back(i);
        }
        int ans = INT_MAX;
        for(auto i: indexes)
        {
            vector<int> tmp;
            tmp.push_back(-1);
            for(auto j: i.second) tmp.push_back(j);
            tmp.push_back(n);
            
            vector<int> dp;
        
            for(int j = 0; j < (int)tmp.size(); j++)
            {
                if(j==0) continue;
                else dp.push_back(tmp[j]-tmp[j-1] - 1);
            }
            sort (dp.rbegin(), dp.rend());
          
            int dawg = dp[0];
            if(dawg>0)dawg --;
            if(dawg%2==0) dawg/=2;
            else dawg = dawg/2 + 1;
            ans = min(ans, max(dawg, dp[1]));
        }
        cout << ans << endl;

    }
    return 0;
}                                                           