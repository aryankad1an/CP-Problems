// Link To Problem : 


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
        vector<int> nums(n);
        for(int i = 0; i < n; i++){
            cin >> nums[i];
        }
        int noOfOdds = 0;
        int ones = 0;
        for(int i = 0; i < n; i++){
            if(nums[i] % 2 != 0 && nums[i] != 1){
                noOfOdds++;
            }
            else if(nums[i] == 1){
                ones++;
            }
        }
        int bob = 0;
        int alice = 0;
        if(ones%2==0) {
            alice += ones/2;
            bob += ones/2;
        }
        else{
            alice += ( ones/2 )+ 1;
            bob += ones/2;
        }
        n -= ones;

        if(noOfOdds %2 == 0){
            if(ones %2 != 0) alice += n;
            else bob += n;
        }
        else{
            if(ones %2 != 0) bob += n;
            else alice += n;
        }
        if(alice > bob) cout << "Alice" << endl;
        else if(bob > alice) cout << "Bob" << endl;
        else cout << "Draw" << endl;
    }
    return 0;
}