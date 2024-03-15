// Link To Problem : https://codeforces.com/problemset/problem/1679/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;

int32_t main(){
    int n , q;
    cin >> n >> q;
    vector<int> a(n);
    int sum = 0;
    map<int, int> updates;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
        updates[i] = a[i];
    }
    int val = 0;
    while(q--){
        int def;
        cin >> def;
        if(def==1){
            int x, y;
            cin >> x >> y;
            x--;
            if(!updates.count(x)){
                updates[x] = val;
            }
            sum -= updates[x];
            updates[x] = y;
            sum += updates[x];
            cout << sum << endl;
        }
        else{
            int x;
            cin >> x;

            val = x;
            sum = x * n;
            updates.clear();
            cout << sum << endl;
        }
    }
    return 0;
}