// Link To Problem : https://codeforces.com/contest/1915/problem/D


#include<iostream>

using namespace std;
void solve(int n, string s){
    string original = s;
    string answer = "";
    // a, e: V b, c, d: C
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e'){
            s[i] = 'V';
        }
        else{
            s[i] = 'C';
        }
    }
    int start = 0;
    if(n==2 || n==3){
        cout << original << endl;
        return ;
            
    }else{
    while(start < n){
        // substring of s from start to start+3
        
        string sub = s.substr(start, 3);
        string sub2 = s.substr(start, 2);
       
        if((sub == "CVC" && s[start+3] == 'C') || start+3 == n){
            answer += original.substr(start, 3);
            answer += '.';
            start += 3;
        }
        else {
            answer += original.substr(start, 2);
            answer += '.';
            start += 2;
        }

    }
    // remove last dot
    answer.pop_back();
    cout << answer << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n; string s;
        cin >> n >> s;
        
        solve(n, s);

    }
    return 0;
}