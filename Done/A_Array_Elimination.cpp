// Link To Problem : https://codeforces.com/problemset/problem/1601/A


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
        map<int, int> setBits;
        for (int i = 0; i < n; i++){
            int t;
            cin >> t;
            for(int j = 0; j < 32; j++){
                if(t & (1<<j)){
                    setBits[j]++;
                }
            }
        }
        vector<int> damn;
        for(auto i: setBits){
            damn.push_back(i.second);
        }
        sort (damn.begin(), damn.end());
        vector<int> ans;
        int min;
        if(damn.size() > 0) min = damn[0];
        else{
            for(int i = 0; i < n; ++i){
                cout << i+1 << " ";
            }
            cout << endl;
            continue;
        }
        // for(auto i: damn) cout << i << " ";
        // cout << endl;
        for(int i = 1; i*i <= min; ++i ){
            bool flag1 = true;
            bool flag2 = true;
            for(int j: damn){
                if(j%i!=0){
                    flag1 = false;
                }
                if(j%(min/i)!=0){
                    flag2 = false;
                }
            }
            // cout << i << " " << n/i << endl;
            if(flag1){
                ans.push_back(i);
            }
            if(flag2 && i != min/i && min%i==0){
                ans.push_back(min/i);
            }
        }
        sort (ans.begin(), ans.end());
        for (auto i: ans){
            cout << i << " ";
        }
        cout << endl;
        // cout << endl;

    }
    return 0;
}