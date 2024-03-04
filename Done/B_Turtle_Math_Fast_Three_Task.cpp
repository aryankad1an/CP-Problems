// Link To Problem : https://codeforces.com/contest/1933/problem/B


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
        vector<int> v(n);
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int z;
            cin >> z;
            v[i] = z%3;
            sum += v[i];
        }
        sort (v.begin(), v.end());
        int al = sum%3;
        if(al == 0) cout << 0 << endl;
        else{
            // search for al in the array, if found print 1
            if(al == 1){
                if(binary_search(v.begin(), v.end(), al)){
                cout << 1 << endl;
                }
                else{
                    cout << 2 << endl;
                }
            }
            else{
                cout << 1 << endl;
            }
            
        }

    }
    return 0;
}