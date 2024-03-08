// Link To Problem : https://www.codechef.com/problems/CURSED       


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        vector<long> a(n);
        for (long i = 0; i < n; i++){
            cin >> a[i];
        }
        sort (a.begin(), a.end());
        long ans = 0;
        long sum = a[0];
        vector<long> answ;
        vector<long> atend;
        answ.push_back(a[0]);
        for(long i = 1; i < n; i++){
            if(sum >= a[i]){
                atend.push_back(a[i]);
            }
            else{
                answ.push_back(a[i]);
                sum += a[i];
            }
            
        }
        // merging the two arrays
        for(long i = atend.size()-1; i >= 0; i--){
            answ.push_back(atend[i]);
        }
        long sum2 = answ[0];
        for(long i = 1; i < n; i++){
            if(sum2 >= answ[i]){
                ans++;
            }
            sum2 += answ[i];
        }
        cout << ans << endl;
        for (long i = 0; i < n; i++){
            cout << answ[i] << " ";
        }
        cout << endl;

        
    }
    return 0;
} 