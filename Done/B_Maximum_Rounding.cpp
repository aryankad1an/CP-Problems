// Link To Problem : https://codeforces.com/problemset/problem/1857/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include <string>
#define long long long int

using namespace std;

void removeElementsStartingFromIndex(string &s, int index){
    for (long i = index; i < s.size(); i++){
        s[i] = '0';
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string n;
        cin >> n;
        string ans = n;
        bool insideSequence = false;
        long l = -1, w=-1, removeFrom = -1;
        for (long i = 0; i < n.size(); i++){
            if(i < n.size()-1){
                if(n[i] == '4' && (n[i+1] >= '4')){
                    if(!insideSequence){
                        if(i==0){
                            w = -2;
                        }
                        else{
                            w = i-1;
                        }
                        insideSequence = true;
                    }  
                }    
            }
            if(n[i] < '4'){
                insideSequence = false;
            }
            if(i>0){
                if(n[i] >= '5' && n[i-1] == '4' && insideSequence){
                    if(w == -2){
                        ans = "1" + ans;
                        l = 0;
                        break;
                    }
                    // increase the wth digit by 1
                    ans[w] = (char)((int)ans[w] + 1);
                    l = w;
                    break;
                }
            }
            if(ans[i] >= '5'){
               if(i==0){
                    // add 1 to the first digit
                    ans = "1" + ans;
                    removeFrom = 1;
                    break;
               }
               else{
                    // add 1 to the previous digit
                    ans[i-1] = (char)((int)ans[i-1] + 1);
                    removeFrom = i;
                    break;
               }
            }
        }
        if(l != -1) removeElementsStartingFromIndex(ans, l+1);
        if(removeFrom != -1) removeElementsStartingFromIndex(ans, removeFrom);
        cout << ans << endl;
    }
    return 0;
}