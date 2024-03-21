// Link To Problem : 


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
int nc2(int n){
    return (n*(n-1))/2;
}

int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> dawg;
        int ans = 0;
        int count4 = 0;
        for(int i = 0; i < n; ++i){
            int t;
            cin >> t;
            if(t == 6 || t == 2){
                dawg.push_back(t);
            }
            if(t==4){
                count4++;
            }
        }
        int temp1  = 0;
        int temp2 = 0;
        n = dawg.size();
        for(int i = n-1; i>=0; --i){
            if(dawg[i] == 2){
                temp1++;
            }
            else{
                temp2++;
                if(i > 0 && dawg[i-1] == 2){
                    ans += ((temp1)*(temp2));
                    temp2 = 0;
                }
            }
        }
        ans += ((temp1)*(temp2));
        ans += nc2(count4);
        cout << ans << endl;

    }
    return 0;
}