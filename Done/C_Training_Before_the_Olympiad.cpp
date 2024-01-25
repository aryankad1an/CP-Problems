#include <iostream>

using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        long long oddCountTillIndex[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long oddCount = 0;
        for (long long i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                oddCount++;
            }
            oddCountTillIndex[i] = oddCount;
        }
        long long temp = 0;
        for (long long i = 0; i < n; i++)
        {
            if (i == 0)
            {
                cout << a[i] << " ";
            }
            else if (i == 1)
            {
                temp += ((a[i] + a[i - 1]) / 2) * 2;
                cout << ((a[i] + a[i - 1]) / 2) * 2 << " ";
            }
            else
            {
                if (a[i] % 2 != 0)
                {
                    long long odd_count = oddCountTillIndex[i];
                    if (odd_count %3 == 2)
                    {
                        temp += a[i]+1;
                        cout << temp << " ";
                    }
                    else{
                        temp += a[i]-1;
                        cout << temp << " ";
                    }
                }
                else
                {
                    temp += a[i];
                    cout << temp << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}
