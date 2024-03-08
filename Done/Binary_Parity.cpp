// Link To Problem : 


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
        // finding sum of binary digits of n
        int sum = 0;
        while(n){
            sum += n%2;
            n = n/2;
        }
        if(sum%2 == 0){
            cout << "EVEN" << endl;
        }
        else{
            cout << "ODD" << endl;
        }
    }
    return 0;
}