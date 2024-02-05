// Link To Problem : https://codeforces.com/problemset/problem/1708/B

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#define long long long int

using namespace std;
int nextFactor(int l, int factor)
{
    int mod = l % factor;
    if (mod == 0)
    {
        return l;
    }
    return l + factor - mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int flag = false;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            int d = nextFactor(l, i);
            ans.push_back(d);
            if (d > r)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for(int i: ans){
                cout << i << " ";
            }
            cout << endl;
        }
    }

    return 0;
}