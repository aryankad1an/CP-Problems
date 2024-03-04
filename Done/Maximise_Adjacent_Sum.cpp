// Link To Problem :  


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
        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());
        if(n<=2) cout <<  sum << endl;
        else cout << (2*sum) -a[0] - a[1] << endl;
    }
    return 0;
}