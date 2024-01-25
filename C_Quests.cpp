#include <iostream>

using namespace std;

void solve(int n, int k, int q[], int e[]){
    
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int q[n], e[n];
        for(int i = 0; i < n; i++){
            cin >> q[i];
        }
        for(int i = 0; i < n; i++){
            cin >> e[i];
        }
        solve(n, k, q, e);
    }
    return 0;
}
