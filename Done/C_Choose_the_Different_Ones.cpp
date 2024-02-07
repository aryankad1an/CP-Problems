// Link To Problem : https://codeforces.com/contest/1927/problem/C
#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
#define long long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        set<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.insert(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            b.insert(x);
        } 
        // creating hashmap for a and b and initializing the frequency of each element
        vector<int> freqA(k+1), freqB(k+1);
        for(int i = 1; i <= k; i++){
            freqA[i] = 0;
            freqB[i] = 0;
        }
        for (auto x : a)
        {
            if(x >= 1) if(x <= k) freqA[x]++;
        }
        for (auto x : b)
        {
            if(x>= 1) if(x <= k) freqB[x]++;
        }
        int i = 1, j = 1;
        int ct1 = 0, ct2 = 0;
        int l = k;
        int li = 0;
        while(l--){
            if(freqA[i]){
                ct1++;
            }
            if(freqB[j]){
                ct2++;
            }
            if(freqA[i] && freqB[j]){
                li++;
            }
            i++;j++;
        }
        if((ct1-(k/2))+(ct2-(k/2)) == li && (ct1-(k/2)) >= 0 && (ct2-(k/2)) >= 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}