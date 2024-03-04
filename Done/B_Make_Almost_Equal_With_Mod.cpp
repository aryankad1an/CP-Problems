// Link To Problem : https://codeforces.com/problemset/problem/1909/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;

bool checkEqualMod(vector<long> a, long n, long x){
    vector<long> mods;
    for (long i = 0; i < n; i++)
    {
        mods.push_back(a[i]%x);
    }
    sort(mods.begin(), mods.end());
    if(mods[0] == mods[n-1]){
        return true;
    }
    return false;
}
int main(){
    long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        vector<long> a(n);
        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long ans = 2;
        while(true){
            if(!checkEqualMod(a, n, ans)){
                cout << ans << endl;
                break;
            }
            ans <<= 1;
        }
    }
    return 0;
}