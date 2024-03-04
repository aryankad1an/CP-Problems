// Link To Problem : https://www.codechef.com/START123B/problems/MINANDMAX


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
        long N;
        cin >> N;
        if(N%2!=0){
            long z = N/2;

            long sum = (z*(z+1));
            cout << sum + z + 1 << endl;
        }
        else{
            long z = N/2;

            long sum = (z*(z+1));
            cout << sum << endl;
        }
    }
    return 0;
}