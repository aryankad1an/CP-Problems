// Link To Problem :https://cses.fi/problemset/task/2162
// Link to solution: https://www.youtube.com/watch?v=8QfWrRRK2PA

#include<iostream>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<cassert>
using namespace std;
#define ll long long int



// Josephus problem solution
int main(){
    ll n;
    cin >> n;

    // Create a vector to represent the children
    vector<int> children(n);
    for(int i = 0; i < n; i++){
        children[i] = i + 1;
    }

    while(children.size() > 1){
        vector<int> temp;

        // Eliminate every second child and store the remaining children in a temporary vector
        for(int i = 0; i < children.size(); i++){
            if(i%2 == 1){
                cout << children[i] << " "; // Print the eliminated child
            }
            else{
                temp.push_back(children[i]); // Store the remaining child
            }
        }

        // Update the children vector based on the number of remaining children
        if(children.size() % 2 == 0){
            children = temp; // If the number of children is even, update the children vector with the remaining children
        }
        else{
            int starter = temp.back();
            temp.pop_back();
            temp.insert(temp.begin(), starter); // If the number of children is odd, rotate the remaining children vector
            children = temp;
        }
    }

    cout << children[0]; // Print the last remaining child

    return 0;
}