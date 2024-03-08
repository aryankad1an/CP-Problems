// Link To Problem : https://www.codechef.com/problems/BTAR


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
        vector<int> a(n);
        map<int, int> freq;
        for(int i = 0; i < n; i++){
            int z;
            cin >> z;
            z %= 4;
            a[i] = z;
            freq[a[i]]++;
        }
        int ans = 0;
        bool flag = true;

        int one = freq[1];
        int two = freq[2];
        int three = freq[3];
        if(one > three){
            ans += three;
            one -= three;
            three = 0;
        }
        else{
            ans += one;
            three -= one;
            one = 0;
        }

        if(three%2==0){

            two += three/2;
            ans += three/2;
            three = 0;
        }
        else{
            flag = false;
        }

        if(one%2==0){
            two += one/2;
            ans += one/2;
            one = 0;
        }
        else{
            flag = false;

        }

        if(two%2==0){
            ans += two/2;
        }
        else{
            flag = false;
        }



        if(flag){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
        
        

    }
    return 0;
}