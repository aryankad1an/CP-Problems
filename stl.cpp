// Link To Problem : https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/


#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<algorithm>
#define long long long int

using namespace std;
int main(){
    // nesting maps
    map<pair<int, int>, int> m;
    m[{1, 2}] = 3;
    m[{2, 3}] = 4;
    m[{3, 4}] = 5;

    // iterating over the map
    for(auto i : m){
        cout << i.first.first << " " << i.first.second << " " << i.second << endl;
    }

    map<pair<string, string> , vector<int> > m1;

    m1[{"abc", "def"}].push_back(1);
    m1[{"abc", "def"}].push_back(2);
    m1[{"abc", "def"}].push_back(3);
    m1[{"aryan", "kadian"}].push_back(64);
    m1[{"aryan", "kadian"}].push_back(65);
    m1[{"aryan", "kadian"}].push_back(66);

    for(auto i : m1){
        cout << i.first.first << " " << i.first.second << " ";
        for(auto j : i.second){
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}