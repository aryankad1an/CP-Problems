// Link To Problem : https://www.youtube.com/watch?v=St_7s5FDn1A


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
        // a prefix array storing no. of unique characters in the string till an index o
        vector<int> prefix(s.size(),0);
        set<char> st;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            prefix[i] = st.size();
        }
        int count = 0;
        for(int i=0;i<s.size();i++){
            count += prefix[i];
        }
        cout << count << endl;
    }
    return 0;
}