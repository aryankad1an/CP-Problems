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
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while(q--){
            int l, r;
            cin >> l >> r;
            // 1-based to 0-based indexing
            l--, r--;
            // we will use a frequency array to store the frequency of each character in the string s
            vector < int > freq(26, 0);
            for(int i = l ; i <= r ; i++) {
                freq[s[i]-'a']++;
            }
            int odd = 0;
            for(int i = 0 ; i < 26 ; i++) {
                if(freq[i]%2) {
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