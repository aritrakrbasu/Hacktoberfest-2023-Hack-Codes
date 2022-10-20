//Author : Surjendu Pal
//Problem Link : https://codeforces.com/contest/1742/problem/D
#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;
using ll=long long;
const ll MOD = 1000000007;

int gcd(int a, int b)
{
    return a?gcd(b%a,a):b;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(200010),mp(200010,0);
    for(int i=1;i<=n;i++) {
        cin>>v[i];
        mp[v[i]] = i;
    }

    int ans = -1;
    for(int i=1;i<=1000;i++) {
        for(int j=1;j<=1000;j++) {
            if(gcd(i,j)==1 and mp[i]!=0 and mp[j]!=0) {
                ans = max(ans,mp[i]+mp[j]);
            }
        }
    }
    cout<<ans<<endl;
}



int main()
{
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}


    
