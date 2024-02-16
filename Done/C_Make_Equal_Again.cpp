// Link To Problem : https://codeforces.com/contest/1931/problem/C


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
        vector <int> a(n);
        for (int i=0; i<n; i++){
            cin >> a[i];
        }
        int count1 = 1, count2 = 1;
        int index_of_disapproval = -1;
        bool flag = false;
        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                count1++;
            }
            else{
                index_of_disapproval = i;
                flag = true;
                break;
            }
        }
        if(!flag){
            index_of_disapproval = n; 
            count2=0;
        } 
        for (int i=n-2; i>=index_of_disapproval; i--){
            if(a[i] == a[i+1]){
                count2++;
            }
            else{
                break;
            }
        }

        if(a[0] == a[n-1]){
            count1 += count2;
            cout << n-count1 << endl;
        }
        else{
            cout << n-max(count1, count2) << endl;
        }
    }
    return 0;
}