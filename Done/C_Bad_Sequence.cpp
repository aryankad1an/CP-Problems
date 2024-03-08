// Link To Problem : https://codeforces.com/problemset/problem/1214/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    int size;
    cin >> size;
    string s;
    cin >> s;
    map<char, int> hsh;
    for(int i = 0; i < size; i++){
        hsh[s[i]]++;
    }
    if(hsh[')'] != hsh['(']){
        cout << "No" << endl;
        return 0;
    }
    else{
        stack<char> st;
        bool firstVoilation = false;
        for(int i = 0; i < size; i++){
            if(s[i] == ')'){
                if(st.empty()){
                    firstVoilation = true;
                }
                else{
                    st.pop();
                }
            }
            else{
                st.push(s[i]);
            }
        }
        if(st.empty() && !firstVoilation){
            cout << "Yes" << endl;
        }
        else{
            // count no of elements in set
            int count = 0;
            while(!st.empty()){
                st.pop();
                count++;
            }
            if(count == 1){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
    return 0;
}