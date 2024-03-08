// Link To Problem : 


#include<iostream>
#include<vector>
#include<climits>
#include<unordered_map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        for(char c : s){
            freq[c]++;
        }
        int ans = INT_MAX;
        for(char c = 'a'; c <= 'z'; c++){
            if(freq[c] == 0) continue;
            vector<int> prefix(s.size(),0);
            prefix[0] = (s[0] == c);
            for(int i = 1; i < s.size(); i++){
                prefix[i] = prefix[i - 1];
                if(s[i] == c){
                    prefix[i]++;
                }
            }
            int window = freq[c];
            // cout << "Window: " << window << endl;
            int temp = window - prefix[window-1];

            for(int i = 0; i < s.size()-window+1; i++){
                // cout << "Temp: " << temp << endl; 
                ans = min(ans, temp);
                if(s[i] == c) temp++;
                if( i + window < s.size()) if(s[i+window] == c) temp--;
                
            }
        }
        cout << ans << endl;
    }
    return 0;
}