// Link To Problem : https://codeforces.com/problemset/problem/1702/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        map<int, int > lastOccurenceOfElement;
        map<int, int > firstOccurenceOfElement;
        for(int i=0; i<n; i++){
            // if the element is not present in the map
            if(firstOccurenceOfElement.find(a[i]) == firstOccurenceOfElement.end()){
                firstOccurenceOfElement[a[i]] = i;
            }
            lastOccurenceOfElement[a[i]] = i;
        }
        while(k--){
            int x, y;
            cin >> x >> y;
            bool flag = false;
            bool flag2 = false;
            if (firstOccurenceOfElement.find(x) == firstOccurenceOfElement.end() || firstOccurenceOfElement.find(y) == firstOccurenceOfElement.end()) {
                cout << "NO" << endl;
            }
            else{
                int index_of_x = firstOccurenceOfElement[x];
                int index_of_y = lastOccurenceOfElement[y];
                cout << (index_of_x > index_of_y ? "NO" : "YES") << endl;
            }
        }
    }
    return 0;
}