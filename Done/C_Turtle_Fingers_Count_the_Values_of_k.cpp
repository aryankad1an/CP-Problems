// Link To Problem : https://codeforces.com/contest/1933/problem/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#include<cmath>
#define long long long int

using namespace std;

int main(){
    long t;
    cin >> t;
    while(t--){
        long a, b, l;
        cin >> a >> b >> l;
        long count = 0;
        set<long> st;
        for(long i =0; ; i++){
            if(pow(a, i) > l){
                break;
            }
            for(long j = 0; ; j++){
                long ins = pow(a, i) * pow(b, j);
                if(l%ins == 0){
                    // check if ins is in set
                    if(st.find(ins) == st.end()){
                        st.insert(ins);
                        count++;
                    }
                }
                if(ins > l){
                    break;
                }
            }
        }
        cout << count << endl;
        
        
    }
    return 0;
}