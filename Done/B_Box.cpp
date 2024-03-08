// Link To Problem : https://codeforces.com/problemset/problem/1227/B       


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
        int n;
        cin >> n;
        vector<int> arr(n);
        set<int> s;
        for(int i = 1; i <= n; i++){
            s.insert(i);
        }
        for(int i = 0; i < n; i++){
            int z;
            cin >> z;
            arr[i] = z;
        }
        vector<int> ans;
        
        for(int i = 0; i < n; i++){
            if(i == 0){
                ans.push_back(arr[i]);
                // remove element arr[i] from set
                s.erase(arr[i]);
                continue;
            }
            if(arr[i] > arr[i-1]){
                ans.push_back(arr[i]);
                // remove arr[i] from set
                s.erase(arr[i]);
            }
            else{
                ans.push_back(-1);
            }
        }
        vector<int> temp;
        for (int i = 0; i < n; i++){
            if(ans[i] == -1){
                temp.push_back(*s.begin());
                s.erase(*s.begin());
                continue;
            }
            temp.push_back(ans[i]);
        }
       // confirm the answer

        int mx = -1;
        bool flag = true;
        for(int i = 0; i < n; i++){
            mx = max(mx, temp[i]);
            if(mx != arr[i]){
                flag = false;
                break;
            }

        }
        if(flag){
            for(int i = 0; i < n; i++){
                cout << temp[i] << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
    return 0;
}