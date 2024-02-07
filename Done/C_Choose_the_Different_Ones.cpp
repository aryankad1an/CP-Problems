// Link To Problem : https://codeforces.com/contest/1927/problem/C


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
        int n, m, k;
        cin >> n >> m >> k;
        set<int> a, b;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            a.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x;
            cin >> x;
            b.insert(x);
        }
        // converting set to vector
        vector<int> av(a.begin(), a.end());
        vector<int> bv(b.begin(), b.end());
        int i = 0, j = 0;
        int ct1 = 0, ct2 = 0;
        int t = 1;
        int li = 0;
        while(t <= k && i < av.size() && j < bv.size()){
            if(av[i] == t && bv[j] == t){
                i++;
                j++;
                li++;
                t++;
                ct1++;
                ct2++;
            }
            else{
                if(av[i] == t){
                    i++;
                    ct1++;
                    t++;
                }
                else if(bv[j] == t){
                    j++;
                    ct2++;
                    t++;
                }
                else{
                    i++;
                    j++;
                    t++;
                }
            }
        }
        if(ct1 < k/2 || ct2 < k/2){
            cout << "NO" << endl;
        }
        else{
            int n = ct1 - k/2;
            int m = ct2 - k/2;
            if(n+m == li){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }        
    }
    return 0;
}