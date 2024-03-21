// Link To Problem : https://codeforces.com/contest/1945/problem/C


#include<iostream>
#include<vector>
#include<map>
#include<climits>
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
        string s;
        cin >> s;

        vector<int> noOfOnesTillIndex(n, 0);
        for (int i = 0; i < n; i++)
        {
            if(i==0){
                if(s[i]=='1') noOfOnesTillIndex[i] = 1;
                else noOfOnesTillIndex[i] = 0;
            }
            else{
                if(s[i]=='1') noOfOnesTillIndex[i] = noOfOnesTillIndex[i-1] + 1;
                else noOfOnesTillIndex[i] = noOfOnesTillIndex[i-1];
            }
        }
        vector<int> noOfZerosFromRight(n, 0);
        for (int i = n-1; i >= 0; i--)
        {
            if(i==n-1){
                if(s[i]=='0') noOfZerosFromRight[i] = 1;
                else noOfZerosFromRight[i] = 0;
            }
            else{
                if(s[i]=='0') noOfZerosFromRight[i] = noOfZerosFromRight[i+1] + 1;
                else noOfZerosFromRight[i] = noOfZerosFromRight[i+1];
            }
        }
        
        int pnt = n/2-1;
        vector<int> answers;
        for(int i = pnt; i <n; ++i){
            int o = noOfOnesTillIndex[i];
            int p = noOfZerosFromRight[i+1];
            if(o*2 <= i+1 && p*2 <= n-i-1){
                answers.push_back(i+1);
                break;
            }
        }
        int ans2 = -1;
        for(int i = pnt; i>=0; --i){
            int o = noOfOnesTillIndex[i];
            int p = noOfZerosFromRight[i+1];
            if(o*2 <= i+1 && p*2 <= n-i-1){
                answers.push_back(i+1);
                break;
            }
        }

        int zero = noOfZerosFromRight[0];
        int one = noOfOnesTillIndex[n-1];
        if(one >= zero){
            answers.push_back(0);
        }
        else{
            answers.push_back(n);
        }
        // for(auto i: answers) cout << i << " ";
        // cout << endl;

        float mid = n/(2*1.0);
        int index = -1; float diff = INT_MAX;
        sort(answers.rbegin(), answers.rend());
        for(int i = 0; i < answers.size(); ++i){
            if(abs(answers[i]-mid) <= diff){
                diff = abs(answers[i]-mid);
                index = i;
            }
        }
        
        cout << answers[index] << endl;

        





    }
    return 0;
}