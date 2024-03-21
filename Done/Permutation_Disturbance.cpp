// Link To Problem : https://www.codechef.com/START126B/problems/PERDIS


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
        vector<int> a(n);
        for(int i = 0; i < n; ++i){
            cin >> a[i];
            
        }
        vector<int> ans;
        int count = 0;
        for(int i = 0; i <n; ++i){
            if(a[i] == i+1){
                count ++;
            }
            else{
                ans.push_back(count);
                count = 0;
            }
        }
        ans.push_back(count);
        int answ = 0;
        for(int i: ans ){
            if(i%2==0) answ += i/2;
            else answ += (i+1)/2;
        }
        cout << answ << endl;

    }
    return 0;
}