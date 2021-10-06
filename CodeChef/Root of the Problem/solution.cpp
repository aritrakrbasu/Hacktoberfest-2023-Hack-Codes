//Author: Soumya Das
#include "bits/stdc++.h"

#define ll long  long
#define e "\n"
// #define ld long double
// #define mod 1000000007
// #define inf LLONG_MAX
// #define pb push_back
// #define ff first
// #define ss second
// #define vll vector <ll> 
// #define pll pair<ll, ll> 

#define Fly ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

int test;

int main(){

    //Defined for fast Input and Output
    Fly

    //IGNORE This
        // #ifndef ONLINE_JUDGE
        //     freopen("input.txt", "r", stdin); 
        //     freopen("output.txt", "w", stdout); 
        // #endif
        // clock_t tStart = clock();
        

    //Code starts here    

    //Taking number of testcase
    ll t;
    cin>>t;

    while(t--){

        //Taking number of nodes ina tree
        ll n, ans=0; 
        cin>>n;

        while(n--){

            //Taking id and sum of its child nodes.
            //after that calculating the nodes
            ll id1, id2;
            cin>>id1>>id2;
            ans += id1-id2;
        }

        //Then printing the root node
        cout<<ans<<e;
    }
    //cerr << "Completed in: "<< (double)((clock() - tStart)*1000)/CLOCKS_PER_SEC<<" ms"<< endl;
    return 0;
}