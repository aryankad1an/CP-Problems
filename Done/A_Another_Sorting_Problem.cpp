#include <iostream>
#include <vector>
using namespace std;
int powerof2(int x){
    int ans = 1;
    while(x--){
        ans *= 2;
    }
    return ans;
}
string binaryStringFromint(int x){
    string ans = "";
    while(x != 0){
        ans = to_string(x%2) + ans;
        x /= 2;
    }
    if(ans == "")
        ans = "0";
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int closest2power;
        int w;
        cin >> w;
    
        // find closest 2 power less than w
        int i = 1;
        while(i <= w){
            i *= 2;
        }
        closest2power = i/2;
        int diff = w - closest2power;
        int ans = 0;
        string str1 = binaryStringFromint(closest2power);
        string str2 = binaryStringFromint(diff);
        int len1 = str1.length();
        int len2 = str2.length();
        for(int i = len2-1; i > 0; i--){
            if(str1[i] == '0' && str2[i] == '0'){
                ans++;
            }
        }
        ans = powerof2(ans);
        cout << ans << endl;

    }
   
    return 0;
}
