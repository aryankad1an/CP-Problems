// Link To Problem : 


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
        // find the largest substring of 0s
        int max0 = 0;
        int curr0 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                curr0++;
            }
            else{
                max0 = max(max0, curr0);
                curr0 = 0;
            }
        }
        max0 = max(max0, curr0);
        int count1 = count(s.begin(), s.end(), '1');
        cout << count1+ max0 << endl;
    }
    return 0;
}