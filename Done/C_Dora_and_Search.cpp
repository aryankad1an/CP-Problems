// Link To Problem : https://codeforces.com/problemset/problem/1793/C


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
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int start = 0;
        int end = n-1;
        int min_element = 1;
        int max_element = n;
        bool ans= false;
        /*ass ques lmao*/
        while(start < end){
            if(a[start] == min_element){
                start++;
                min_element++;
            }else if(a[end] == min_element){
                end--;
                min_element++;
            }else if(a[start] == max_element){
                start++;
                max_element--;
            }else if(a[end] == max_element){
                end--;
                max_element--;
            }else{
                ans = true;
                break;
            }
        }
        if(ans) cout << start+1 << " " << end+1 << endl;
        else cout << -1 << endl;
    }
    
    return 0;
}