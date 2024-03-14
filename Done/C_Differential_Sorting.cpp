// Link To Problem : https://codeforces.com/problemset/problem/1635/C


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
                int the_index = -1;
                for(int i = 0; i < n-1; i++){
                        if(a[i] <= a[i+1]){
                                the_index = i;
                        }
                }
                if(the_index != n-2){
                        cout << -1 << endl;
                        continue;
                }
                bool issorted = true;
                for(int i = 0; i < n-1; i++){
                        if(a[i] > a[i+1]){
                                issorted = false;
                        }
                }
                if(issorted) {
                        cout << 0 << endl;
                        continue;
                }
                if(a[n-1] < 0 && a[n-2] < 0){
                        cout << -1 << endl;
                        continue;
                } 
                else cout << n-2  << endl;
                for(int i  = 0; i < n-2; ++i){
                        cout << i+1 << " " << the_index+1 << " " << the_index+2 << endl;
                }
                if(a[n-1] < 0 && a[n-2] < 0){
                        // edge case lol
                        cout << n-1 << " " << 1 << " " << 2 << endl;
                        cout << n << " " << 1 << " " << 2 << endl;
                }
                


		
	}
	return 0;
}