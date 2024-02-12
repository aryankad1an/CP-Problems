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
        string s;
        cin >> s;
        int zerocount = count(s.begin(), s.end(), '0');
        int onecount = s.size() - zerocount;
        int n = s.size();
        if(zerocount==onecount){
            cout << 0 << endl;
            continue;
        }
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                onecount--;
            }
            else{
                zerocount--;
            }
            if(zerocount < 0 || onecount < 0){
                cout << n-i << endl;
                break;
            }           
        }
    }
    return 0;
}
