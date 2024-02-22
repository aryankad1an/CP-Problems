// Link To Problem : https://www.codechef.com/problems/TRANCST


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#define long long long int

using namespace std;
string intToBinaryString(long n){
    string s = "";
    while(n>0){
        s+= to_string(n%2);
        n/=2;
    }
    reverse(s.begin(), s.end());
    return s;
}
int main(){
    long t;
    cin >> t;
    while(t--){
        long n;
        cin >> n;
        string s= intToBinaryString(n);
        bool insequence=false;
        bool isgood = true;
        vector<long> indices;
        long lat = 0;
        for(int i = 0; i < s.size() ; i++){
            if(insequence && s[i] == '0'){
                indices.push_back(s.size() - i-1);
            }
            if(s[i] == '0'){
                insequence = true;
            }
            if(insequence && s[i] == '1'){
                isgood = false;
            }
            
        }
        long ans = 1;
        for (int i = 0; i < indices.size(); i++)
        {
            // cout << indices[i] << " ";
            ans+= pow(2,indices[i]);
        }        
        if(!isgood)cout << ans <<  endl;
        else cout << 0 << endl;

    }
    return 0;
}