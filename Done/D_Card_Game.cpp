// Link To Problem : https://codeforces.com/contest/1932/problem/D


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
        char trump;
        cin >> trump;
        map<char, set<char>> m;
        set<char> trump_cards;
        for (int i = 0; i < 2 * n; ++i) {
            string s;
            cin >> s;
            if (s[1] == trump) {
                trump_cards.insert(s[0]);
            }
            else {
                m[s[1]].insert(s[0]);
            }
        }
        int odd = 0;
        for (auto i : m) {
            if (i.second.size() % 2)
                ++odd;
        }
        // if odd is more than no of trump cards, i will be impossible to make the arrangement nigg
        if (odd > trump_cards.size()) {
            cout << "IMPOSSIBLE";
        }
        else {
            for (auto i : m) {
                int c = 1;
                for (auto ch : i.second) {
                    cout << ch << i.first << " ";
                    if (c % 2 == 0) cout << endl;
                    c++;
                }
                // handling leftovers
                if (c % 2 == 0) {
                    cout << *trump_cards.begin() << trump << endl;
                    trump_cards.erase(*trump_cards.begin());
                }
            }
            int c = 1;
            for (auto i : trump_cards) {
                cout << i << trump << " ";
                if (c % 2 == 0) cout << endl;
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}