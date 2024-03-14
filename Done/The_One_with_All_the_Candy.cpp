// Link To Problem : https://www.codechef.com/practice/course/4-star-difficulty-problems/DIFF1900/problems/S07E09


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
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
        int smallest = *min_element(a.begin(), a.end());
        int smallestcount = count(a.begin(), a.end(), smallest);
        int dawg = n*(smallest+1) - smallestcount;
        cout << dawg << endl;

    }
    return 0;
}