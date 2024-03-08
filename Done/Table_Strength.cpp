    // Link To Problem : 


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
        while(t--){
            long n;
            cin >> n;
            vector<long> a(n);
            for (long i = 0; i < n; i++)
            {
                cin >> a[i];
            }
            sort (a.rbegin(), a.rend());
            long ans = 0;
            for (long i = 0; i < n; i++)
            {
                ans = max(ans, a[i]*(i+1));
            }
            cout << ans << endl;
        }
        return 0;
    }