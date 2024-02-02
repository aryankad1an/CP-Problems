// Link To Problem : https://www.codechef.com/problems/SUBARRY?tab=statement


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
        vector<long> a;
        for (long i = 0; i < n; i++){
            long x;
            cin >> x;
            a.push_back(x);
        }
        // sort a
        sort(a.begin(), a.end());
        
        long index = -1;
        long min=0, max=0;
        if(a[0] < 0 && a[n-1] >= 0){
            index = 1;
        }
        else if(a[n-1] < 0){
            index = 2;
        }

        if(index == -1){
            min = a[0]*a[0];
            max = a[n-1]*a[n-1];
        }
        else if(index == 1){
            min = a[0] * a[n-1];
            a[n-1]*a[n-1] > a[0]*a[0] ? max = a[n-1]*a[n-1] : max = a[0]*a[0];
        }
        else{
            min = a[n-1] * a[n-1];
            max = a[0] * a[0];
        }
      
        cout << min << " ";
        cout << max << endl;
    }
    return 0;
}