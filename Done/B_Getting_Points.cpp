// Link To Problem : https://codeforces.com/contest/1902/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#define long long long int

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long n, P, l, t;
        cin >> n >> P >> l >> t;

        long no_of_labs = (n-1)/7 + 1;
        long no_of_days_to_do_labs = no_of_labs/2 + no_of_labs%2;
        long points_obtainable_whilst_doing_lab = no_of_days_to_do_labs * l + no_of_labs * t;
        if(points_obtainable_whilst_doing_lab > P){
            long days = no_of_days_to_do_labs;
            long extra = points_obtainable_whilst_doing_lab - P;
            if(no_of_labs %2 != 0){
                extra -= (t+l);
                days--;
                if(extra < 0){
                    cout << n - days - 1 << endl;
                    continue;
                }
            } 
            long extra_days = (extra/(2*t+l));
            cout << n - (days - extra_days) << endl;
            
            
            
        }
        else{
            long remaining = P - points_obtainable_whilst_doing_lab;
            long no_of_days_to_do_remaining = ceil(remaining/(l*1.0)) ;
            cout << n - (no_of_days_to_do_remaining + no_of_days_to_do_labs) << endl;
        }
    }
    return 0;
}