// Link To Problem : 


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include <numeric>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int L, R;
        cin >> L >> R;
        vector<int> ans;
        for(int i =L; i <= R; i++){
            if(i==R){
                ans.push_back(L);  
            }
            else{
                ans.push_back(i+1);
            }
        }
        bool check = true;
        if(__gcd(L, R) != 1){
            check = false;
            for(int i = 0; i < ans.size(); i++){
                if(__gcd(ans[i], R)==1 && __gcd(ans[i]-1, L) ==1){
                    swap(ans[i], ans[ans.size()-1]);
                    check = true;
                    break;
                }
            }
        }
        if(check){
            for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        }
        else{
            cout << -1 << endl;
        }
        
    }
    return 0;
}