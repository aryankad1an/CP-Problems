#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    string s;
    cin >> s;
    int l = count(s.begin(), s.end(), 'L');
    int r = l;
    vector<int> ans(n);
    int num = 1;
    for (int i = n - 1; i >= 0; i--) {
      if (s[i] == 'L') {
        l--;
        num = num * arr[l] % m;
      } else {
        num = num * arr[r] % m;
        r++;
      }
      ans[i] = num;
    }
    for (int i = 0; i < n; i++) {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}