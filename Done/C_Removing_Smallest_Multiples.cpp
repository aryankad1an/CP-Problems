// Link To Problem : https://codeforces.com/problemset/problem/1734/C


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
        int n;
		cin >> n;
		string s;
		cin >> s;
		s=' '+s;
		int ans=0;
        // Sieve's Approach
		for(int i=1;i<=n;i++)
		{
			for(int j=i;j<=n;j+=i)
			{
				if(s[j]=='1') break;
				if(s[j]=='0') ans+=i,s[j]='2';
			}
		}
		cout << ans << endl;
    }
    return 0;
}