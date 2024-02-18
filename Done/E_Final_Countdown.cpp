// Link To Problem : https://codeforces.com/contest/1932/problem/E      


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
        string s;
        cin >> s;

        vector<int> sums;
        int acc = 0;
        for (int i = 0; i < n; i++)
        {
            sums.push_back(s[i] - '0'+acc);
            acc += s[i] - '0';
        }
        

        string ans = "";
        int carry = 0;
        for(int i = sums.size()-1; i>=0; i--){
            int dig = (sums[i]+carry)%10;
            ans.push_back(dig+'0');
            carry = (sums[i]+carry)/10;
        }
        if(carry){
            ans.push_back(carry+'0');
        }
        reverse(ans.begin(), ans.end());
        // remove leading 0s
        int i = 0;
        while(i<ans.size() && ans[i]=='0'){
            i++;
        }
        ans = ans.substr(i);
        cout << ans << endl;
        
        
    }
    return 0;
}