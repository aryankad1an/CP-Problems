// Link To Problem : https://codeforces.com/contest/1907/problem/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cassert>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        // prefix array for chars
        vector<int> no_of_chars(26, 0);

        for(int i = 0; i < n; i++){
            no_of_chars[s[i] - 'a']++;
        }
        // reverse sort the no_of_chars
        sort(no_of_chars.begin(), no_of_chars.end(), greater<int>());
        
        if(no_of_chars[0] > n/2)
        {
            cout << n - 2*(n-no_of_chars[0]) << endl;
        }
        else
        {
            n % 2 != 0 ? cout << 1 << endl : cout << 0 << endl;
        }
    }
    return 0;
}