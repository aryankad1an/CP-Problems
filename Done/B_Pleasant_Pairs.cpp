#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    


    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        long long a[n+1];

        for (int i = 1; i < n+1; i++)
        {
            cin>>a[i];
        }
        
        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = a[i] - i; j <= n; j += a[i])
            {
                if (j >= 0)
                    if (a[i] * a[j] == i + j && i < j)
                        ans++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}