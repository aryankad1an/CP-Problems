#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
#include<map>
using namespace std;
#define ll long long
 
 
/*
 * This function solves the problem of jumping through segments.
 * It takes input of the number of segments and their start and end points.
 * It uses binary search to find the minimum jump length required to jump through all segments.
 * The function then prints the minimum jump length.
*/
void solve()
{
    ll n,l,r;
    cin>>n;
    vector<vector<ll> > vect;
    for(ll i=0;i<n;i++)
    // Taking input of the segments
    {
        cin>>l>>r;
        vect.push_back( {l,r} );
    }
     
    ll low=0,high=1e9;
    while(low<=high)
    {
        // This line initializes the lower and upper bounds for the binary search. The lower bound is 0 and the upper bound is 1e9 (1 billion)
        ll mid=(low+high)/2;
        ll x=0,y=0;
        ll fg=0;
        for(ll i=0;i<n;i++)
        {
            // This loop checks if the segments can be jumped through with the current jump length. If not, it increases the jump length.

            // The variable x stores the minimum value of the start point of the segments that can be jumped through with the current jump length.

            // The variable y stores the maximum value of the end point of the segments that can be jumped through with the current jump length.
            if(vect[i][0]>y+mid || vect[i][1]<x-mid)
            {
                // If the current segment cannot be jumped through with the current jump length, the loop breaks and the jump length is increased.

                // The variable fg is used to check if the loop breaks due to the above condition or due to the loop ending.
                fg=1;
                break;
            }
            else
            {
                // If the current segment can be jumped through with the current jump length, the variables x and y are updated.
                x=max(vect[i][0],x-mid);
                y=min(vect[i][1],y+mid);
            }
        }
        // If the loop breaks due to the above condition, the jump length is increased.
        if(fg==1)
        low=mid+1;
        else
        // If the loop breaks due to the loop ending, the jump length is decreased.
        high=mid-1;
    }
    cout<<low<<endl;
    
    
}
 
 
 
int main()
{
    ll t;
    cin>>t;
    while (t--)
    {
        solve();
    }
}