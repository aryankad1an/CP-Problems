// Link To Problem : https://codeforces.com/problemset/problem/1420/B


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
        vector<int> vp(n);
        for (int i = 0; i < n; i++){
            cin >> vp[i];
        }
        // edge case, if all elements are same, then ans is NO
        int flag = 0;
        for (int i = 1; i < n; i++){
            if(vp[i] != vp[i-1]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        int dawg = vp[0];
        int firstOccurence = -1;
        for(int i = 0; i < n; ++i){
            if(vp[i] != dawg && firstOccurence == -1){
                firstOccurence = i;
            }
            if(vp[i] != dawg){
                cout << 1 << " " << i+1 << endl;
            }
        }
        for(int i = 1; i < n; ++i){
            if(vp[i] == dawg){
                cout << firstOccurence+1 << " " << i+1 << endl;
            }
        }
    }
    return 0;
}