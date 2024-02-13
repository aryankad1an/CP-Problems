#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;

/*
PROBLEM: Given a string s and Q queries, each query is of the form (l,r) where l and r are the starting and ending index of the string s, you have to tell whether the substring s[l,r] can be rearranged to form a palindrome or not.
*/
const int N = 1e5+10;
int hsh[N][26];
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        // reset the hash array
        for(int i = 0 ; i < N ; i++) {
            for(int j = 0 ; j < 26 ; j++) {
                hsh[i][j] = 0;
            }
        }
        // precompute the frequency of each character in the string
        for(int i = 0 ; i < n ; i++) {
            hsh[i+1][s[i]-'a']++;
        }
        // prefix sum of the frequency of each character
        for(int i = 1 ; i <= n ; i++) {
            for(int j = 0 ; j < 26 ; j++) {
                hsh[i][j] += hsh[i-1][j];
            }
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            
           
            int odd = 0;
            for(int i = 0 ; i < 26 ; i++) {
                int charCt = hsh[r][i] - hsh[l-1][i];
                if(charCt % 2 !=0) {
                    odd++;
                }
            }
            // if the number of characters with odd frequency is greater than 1, then it is not possible to rearrange the substring to form a palindrome
            if(odd > 1) {
                cout<<"NO"<<endl;
            }
            else {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}