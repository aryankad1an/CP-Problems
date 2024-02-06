// Link To Problem : https://codeforces.com/problemset/problem/1706/B
 
 
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
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        // making a no_of_occurence map for this array
        map<int, int> no_of_occurence;
        map<int, int> last_occurence;
        for(int i =1; i <= n; i++){
            no_of_occurence[i] = 0;
            last_occurence[i] = -1;
        }
        for(int i = 0; i < n; i++){
            if((last_occurence[a[i]] != -1) && ((i - last_occurence[a[i]]) %2) == 0){
                no_of_occurence[a[i]]--;
            }
        
            no_of_occurence[a[i]]++;
            last_occurence[a[i]] = i;
        }
        
        // printing the no_of_occurence in sequence
        for(auto i : no_of_occurence){
            cout << i.second << " ";
        }
        cout << endl;
    }
    return 0;
}