// Link To Problem : https://codeforces.com/contest/1948/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
bool checksorted(vector<int> a){
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] > a[i + 1]){
            return false;
        }
    }
    return true;
}
int32_t main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<int> positionsOfTwoDigits;
        for(int i = 0; i < n; i++){
            if(a[i] >= 10 && a[i] <= 99){
                positionsOfTwoDigits.push_back(i);
            }
        }
        if(checksorted(a)){
            cout << "YES" << endl;
            continue;
        }
        bool didfind = false;
        int adder = 0;
        for(int i = 0; i < positionsOfTwoDigits.size(); i++){
            int posSplit = positionsOfTwoDigits[i]+adder;
            // split the value at posSplit into two digits
            int firstDigit = a[posSplit] / 10;
            int secondDigit = a[posSplit] % 10;
            a.erase(a.begin() + posSplit);
            // insert the two digits at posSplit
            a.insert(a.begin() + posSplit, firstDigit);
            a.insert(a.begin() + posSplit + 1, secondDigit);
            // checksorted a
            if(checksorted(a)){
                cout << "YES" << endl;
                didfind = true;
                break;
            }
            // increase the value at posSplit by 2
            adder += 1;
          
        }
        if(!didfind)
        cout << "NO" << endl;
        
     
        

    }
    return 0;
}