// Link To Problem : https://codeforces.com/contest/1927/problem/A


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
        int n; string s;
        cin >> n >> s;
        int first_occurance_of_B = -1;
        int last_occurance_of_B = -1;
        for(int i = 0; i < n; i++){
            if(s[i] == 'B'){
                if(first_occurance_of_B == -1){
                    first_occurance_of_B = i;
                }
                last_occurance_of_B = i;
            }
        }
        cout << last_occurance_of_B-first_occurance_of_B+1<< endl;
    }
    return 0;
}