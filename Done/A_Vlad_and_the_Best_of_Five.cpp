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
        string s;
        cin >> s;
        int acount = 0;
        int bcount = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'A') acount++;
            else bcount++;
        }
        if(acount > bcount){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    }
    return 0;
}