//Author : Surjendu Pal
//Problem Link : https://codeforces.com/contest/1742/problem/A
#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;
using ll=long long;
const ll MOD = 1000000007;



void solve()
{
    vector<int>v(3);
    for(auto &x:v)cin>>x;

    sort(v.begin(),v.end());
	cout<<((v[0]+v[1]==v[2])?"YES":"NO")<<endl;
}



int main()
{
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}
