#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int dist(int a, int b){
    return abs(a-b);
}
int closest(int i, vector<int> v){    
    if(i == 0) return 1;
    if(i == v.size()-1) return v.size()-2;
    int dist1 = dist(v[i], v[i+1]);
    int dist2 = dist(v[i-1], v[i]);

    if(dist1 < dist2) return i+1;
    else return i-1;
}

int main(){
    
    long long n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        vector<int> v(t);
        for(int i=0; i<t; i++){
            cin >> v[i];
        }
        int q;
        cin >> q;
        while(q--){
            int a, b;
            cin >> a >> b;
            a--;
            b--;
            int ans = 0;
            if(b>a){
                bool reached = false;
                while(!reached){
                    int c = closest(a, v);
                    if(c==b){
                        ans += 1;
                        reached=true;
                    }
                    else if(c < a){
                        ans += dist(v[a], v[a+1]);
                        if(a+1 == b) reached=true;
                        a++;
                    }
                    else{
                        ans += 1;
                        a = c;
                    }
                }
                cout << ans << endl;
            }
            else{
                bool reached = false;
                while(!reached){
                    int c = closest(a, v);
                    if(c==b){
                        ans += 1;
                        reached=true;
                    }
                    else if(c > a){
                        ans += dist(v[a], v[a-1]);
                        if(a-1 == b) reached=true;
                        a--;
                    }
                    else{
                        ans += 1;
                        a = c;
                    }
                }
                cout << ans << endl;
            }

        }
    }

    return 0;
}