//Author : Sundar
//Question Link : https://codeforces.com/contest/1472/problem/C


#include<iostream>
#include<map>
#include<vector>
using namespace std;

#define ll long long //using long long as the sum can go beyond the range of int

void solve()
{ 
    int n=0;
    ll ans=0;
    cin>>n;
    vector<ll> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>v[i];
    }
    
    map<ll,ll> mp; // a map to store the points of corresponding positions 
                    //used map so that it is easy to retrieve the data in atmost O(log n)

   for(int i=0;i<n;i++)
    {
        int elem=i+v[i];  

        //storing the maximum points that we could obtain on i+v[i] 
        //by comparing all the indices that could reach to i+v[i]

        mp[elem]=max(mp[elem],mp[i]+v[i]);
       
        ans=max(ans,mp[elem]);
    }
    
    //writing the answer to the console
    cout<<ans<<'\n';  
     
    
}

int main()
{
    //Fast IO
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++)
        solve();

    return 0;
}
