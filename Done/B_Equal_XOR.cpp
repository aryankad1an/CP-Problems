// Link To Problem : https://codeforces.com/contest/1944/problem/B


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
        int n, k;
        cin >> n >> k;
        vector<int> dawg;
        for(int i = 0; i <2* n; ++i){
            int t;
            cin >> t;
            dawg.push_back(t);
        }
        vector<int> a1, a2;
        // split dawg into a1 and a2
        for(int i = 0; i < n; ++i){
            a1.push_back(dawg[i]);
        }
        for(int i = n; i < 2*n; ++i){
            a2.push_back(dawg[i]);
        }
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        
        vector<int> pairs1, pairs2;
        vector<int> unique1, unique2;
        for(int i = 0; i < n; ++i){
            if(a1[i] == a1[i+1] && i < n-1){
                pairs1.push_back(a1[i]);
                pairs1.push_back(a1[i]);
                i++;
            }
            else{
                unique1.push_back(a1[i]);
            }
        }
        for(int i = 0; i < n; ++i){
            if(a2[i] == a2[i+1] && i < n-1){
                pairs2.push_back(a2[i]);
                pairs2.push_back(a2[i]);
                i++;
            }
            else{
                unique2.push_back(a2[i]);
            }
        }
       
        vector<int> ans1, ans2;
        int i = 0;
        while(k > 0 && i < pairs1.size() ){
            ans1.push_back(pairs1[i]);
            ans2.push_back(pairs2[i]);
            ans1.push_back(pairs1[i+1]);
            ans2.push_back(pairs2[i+1]);
            i+=2;
            k--;
        }

        // if k still left
        i = 0;
        while(k>0 && i+1 < unique1.size()){
            ans1.push_back(unique1[i]);
            ans1.push_back(unique1[i+1]);
            ans2.push_back(unique2[i]);
            ans2.push_back(unique2[i+1]);
            i+=2;
            k--;
        }
        // print ans1 and ans2
        for(int i = 0; i < ans1.size(); ++i){
            cout << ans1[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < ans2.size(); ++i){
            cout << ans2[i] << " ";
        }
        cout << endl;

    }
    return 0;
}