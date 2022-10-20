//Author : Surjendu Pal
//Problem Link : https://codeforces.com/contest/1742/problem/C
#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;
using ll=long long;
const ll MOD = 1000000007;



void solve()
{
    char v[8][8];

    char ans = 'B';
    for(int i=0;i<8;i++) {
        int cr = 0;
    	for(int j=0;j<8;j++) {
    		cin>>v[i][j];
    		if(v[i][j]=='R')cr++;
            if(cr==8){
                ans='R';
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
