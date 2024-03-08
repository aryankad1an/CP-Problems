// Link To Problem : https://codeforces.com/contest/1935/problem/B


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int MEX(vector<int> a){
    sort(a.begin(), a.end());
    int res = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if(a[i] == res){
            res++;
        }
    }
    return res;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector <int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = MEX(a);
        // finding first occurence of numbers 1, 2, 3, ... m-1 in the array
        vector<int> first_occurence(m, -1);
        for (int i = 0; i < n; i++)
        {
            if(a[i] < m && first_occurence[a[i]] == -1){
                first_occurence[a[i]] = i;
            }
        }
        // finding max element in first occurence vector
        int max = -1;
        for (int i = 0; i < m; i++)
        {
            if(first_occurence[i] > max){
                max = first_occurence[i];
            }
        }
        bool allelementsEqual = true;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != a[0]){
                allelementsEqual = false;
                break;
            }
        }
        
        int dawg = max+1;
        if(allelementsEqual){
            cout << 2 << endl;
            cout << 1 << " " << 1 << endl;
            cout << 2 << " " << n << endl;
        }
        else if(dawg == n){
            cout << -1 << endl;
        }
        else{
            // creating a subarray from dawg+1 to n
            vector<int> b;
            if(dawg==0){
                dawg=1;
            }
            for (int i = dawg; i < n; i++)
            {
                b.push_back(a[i]);
            }
            if(MEX(b) != m){
                cout << -1 << endl;
            }
            else{
                cout << 2 << endl;
                cout << 1 << " " << dawg << endl;
                cout << dawg+1 << " " << n << endl;
            }            
        }

    }
    return 0;
}