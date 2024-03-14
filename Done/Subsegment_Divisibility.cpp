// Link To Problem : https://www.codechef.com/practice/course/4-star-difficulty-problems/DIFF1900/problems/SEGDIV


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define int long long

using namespace std;
vector<int> answer(500, 0);
void masterBuilder(){
    int curr = 1;
    for(int i = 0; i < 500; i++){
        if(i==0) answer[i] = 1;
        else{
            
        }
    }
}
int32_t main(){
    masterBuilder();
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}