// Link To Problem : https://www.codechef.com/problems/MATCH_ALK


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
        int maxindex=0;
        int maxscore=0;
        for(int i = 1; i <= 22; i++){
            int a, b;
            cin >> a >> b;
            int score = a + b*20;
            if(score > maxscore){
                maxscore = score;
                maxindex = i;
            }
        }
        cout << maxindex << endl;
    }
    return 0;
}