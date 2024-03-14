// Link To Problem : https://www.codechef.com/practice/course/4-star-difficulty-problems/DIFF1900/problems/MAGNETSORT


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
        vector <int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        string magnets;
        cin >> magnets;
        vector <int> acp = a;
        sort(acp.begin(), acp.end());
        vector<int> differentIndices;
        for(int i = 0; i < n; i++){
            if(a[i] != acp[i]){
                differentIndices.push_back(i);
            }
        }
        // callback 1: sorted array
        if(differentIndices.size() == 0){
            cout << "0" << endl;
            continue;
        }
        char l, r;
        l = magnets[0];
        r = magnets[n-1];
        // callback 2: only one operation needed frfr
        if(l!=r){
            cout << "1" << endl;
            continue;
        }
        // callback 2: all magnets are same
        bool allSame = true;
        for(int i = 0; i < n-1; i++){
            if(magnets[i] != magnets[i+1]){
                allSame = false;
                break;
            }
        }
        if(allSame){
            cout << "-1" << endl;
            continue;
        }

        int first = differentIndices[0];
        int last = differentIndices[differentIndices.size()-1];
        char main;
        l == 'N' ? main = 'S' : main = 'N';
        bool flag = false;
        for(int i = 1; i < (int)magnets.size()-1; i++){
            if(magnets[i] == main){
                if(i <= first || i >= last){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            cout << "1" << endl;
        }
        else{
            cout << "2" << endl;
        }
    }
    return 0;
}