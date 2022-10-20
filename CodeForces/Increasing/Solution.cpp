//Author : Surjendu Pal
//Problem Link : https://codeforces.com/contest/1742/problem/B
#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;
using ll=long long;
const ll MOD = 1000000007;



void solve()
{
    int n;cin>>n;
    vector<int>v(n);
    set<int>st;
    for(auto &x:v){
        cin>>x;
        st.insert(x);
    }

	cout<<((st.size()==n)?"YES":"NO")<<endl;
}



int main()
{
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}

