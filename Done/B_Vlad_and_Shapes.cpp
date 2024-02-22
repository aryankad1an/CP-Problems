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

        vector<int> counts;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int countOf1 = 0;
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j] == '1') countOf1++;
            }
            counts.push_back(countOf1);
        }
        sort(counts.rbegin(), counts.rend());
        if(counts[0] == counts[1]) cout << "SQUARE" << endl;
        else cout << "TRIANGLE" << endl;
    }
    return 0;
}