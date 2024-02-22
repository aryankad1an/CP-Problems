// Link To Problem : https://codeforces.com/problemset/problem/1913/C


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    long t;
    cin >> t;
    multiset<long> s;
    vector<long> twos(40,0);
    vector<long> dc(40, 0);

    while(t--){
        long q, a;
        cin >> q >> a;
        if(q==1){
            long z = a;
            twos[z]++;
            for(long i = 0; i<40; i++){
                if(twos[i] > 2){
                    twos[i+1]+= twos[i]/2;
                    twos[i] -= (twos[i]/2)*2;
                }
        }   }
        else{
            long z = a;
            vector<long> binaryOfZ(40,0);
            for(int i = 0; i<40; i++){
                binaryOfZ[i] = z%2;
                z/=2;
            }
            bool flag = true;

            for(int i = 0; i<40; i++){
                if(binaryOfZ[i] == 1){
                    if(twos[i] == 0){
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) cout << "YES" << endl;
            else cout << "NO" << endl;
    
            
        }
    }
    // for (int i = 0; i < 40; i++)
    // {
    //     cout << twos[i] << " ";
    // }
    // cout << endl;

    return 0;
}