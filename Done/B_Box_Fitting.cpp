// Link To Problem : https://codeforces.com/problemset/problem/1498/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;


bool canFit(vector<int> a, int w, int h){
    vector<int> setBits(30);
    for(auto i: a){
        for(int j = 0; j < 30; ++j){
            if(i & (1<<j)){
                setBits[j]++;
            }
        }
    }
    // for(auto i: setBits) cout << i << " ";
    // cout << endl;

    
    int ctr = 0;
    for(int i = 29; i >= 0; --i){
        if(w & (1<<i)) ctr += h;

        if(setBits[i] >= ctr){
            setBits[i] -= ctr;
            ctr = 0;
        }
        else{
            ctr -= setBits[i];
            setBits[i] = 0;
        }
        ctr *= 2;
    }
    
    for(auto i: setBits){
        if(i > 0){
            return false;
        }
    }
    return true;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n, w;
        cin >> n >> w;
        vector<int> a(n);
        
        for(auto &i: a) {
            cin >> i;
        }
        sort(a.begin(), a.end());
        
        // cout << canFit(a, w, 2) << endl;


        int start = 1;
        int end = 10e9;
        while(start < end){
            int mid = start + (end - start)/2;
            // cout << start << " " << mid << " " << end << endl;
            if(canFit(a, w, mid)){
                end = mid;
            }
            else{
                start = mid + 1;
            }
        }
        cout << start << endl;

        
    }
    
    return 0;
}