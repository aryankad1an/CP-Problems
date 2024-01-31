// Link To Problem : https://codeforces.com/contest/1920/problem/A


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
        int lower = 0, upper = 1000000000;
        int noteq = 0;
        vector<int> v;
        while(n--){
            int a, b;
            cin >> a >> b;
            if(a==1){
                lower = max(lower, b);
            }
            else if(a == 2){
                upper = min(upper, b);
            }
            else if(a == 3){
                v.push_back(b);
            }
        }
        int count = 0;
        for(int i: v){
            if(i >= lower && i <= upper){
                count++;
            }
        }

        (upper - lower)+1 - count >= 0? cout << (upper - lower)+1 - count << endl : cout << 0 << endl;
    }
    return 0;
}