#include<iostream>
#include<vector>
using namespace std;
#define int long long

/*
THANKS ARJUN BHAI
*/
void solve(){
    // CODE HERE
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0 ; i<n; i++){
        cin>>v[i];
    }
    int l = 0;
    int count=0;
    for(int i =1 ; i<=n; i++){
        count++;
        while(v[l]<count){
            l++;
            count--;
        }
        cout<<count<<" ";
    }
    cout<<endl;
}

int32_t main(){

 

    int t = 1;
    // Uncomment for multiple testcases
    cin >> t; 
    while(t--){
        solve();
    }
    return 0;
}