// Link To Problem : 


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<cmath>
#include<algorithm>
#define int long long

using namespace std;
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n=1,m=0;
        cin>>n>>m;
        vector<int> v(n);
        int sum = 0;
        for(auto &i : v) {
            cin >> i;
            sum += i;
        }

        int minimum =0, maximum = 0;
        for(int i = 0; i < n; i++){
            maximum += ceil(v[i]/(m*1.0));
        }
        minimum = ceil(sum/(m*1.0));
        cout << minimum << " " << maximum << endl;
    }
    return 0;
}
