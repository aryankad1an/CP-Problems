// Link To Problem : https://codeforces.com/problemset/problem/1703/E

#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#define int long long

using namespace std;
vector<string> rotateStringMatrixBy90Deg(vector<string> mat)
{

    int n = mat.size();
    vector<string> res(n, string(n, ' '));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            res[j][n - i - 1] = mat[i][j];
        }
    }
    return res;
}
int32_t main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                char c;
                cin >> c;
                a[j][k] = c - '0';
            }
        }
        int ans = 0;
        for (int j = 0; j < (n + 1) / 2; j++)
        {
            for (int k = 0; k < n / 2; k++)
            {
                int s = a[j][k] + a[k][n - 1 - j] + a[n - 1 - j][n - 1 - k] + a[n - 1 - k][j];
                ans += min(s, 4 - s);
            }
        }
        cout << ans << endl;
    }
}