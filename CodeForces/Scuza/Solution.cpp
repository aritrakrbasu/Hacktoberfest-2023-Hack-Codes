//Author : Surjendu Pal
//Problem Link : https://codeforces.com/contest/1742/problem/E
#include <bits/stdc++.h>
#include<string>
#include <iostream>
using namespace std;
using ll=long long;
const ll MOD = 1000000007;



void solve()
{
   int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<long long> preSum(n+1);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
      preSum[i+1] = preSum[i]+v[i];
    }
    for (int i = 1; i < n; i++) v[i] = max(v[i-1], v[i]);
    while (q--) {
      int x;
      cin >> x;
      int l = -1;
      int h = n;
      while (h-l > 1) {
        int mid = (l+h)/2;
        if (v[mid] > x) h = mid;
        else l = mid;
      }
      cout << preSum[h] << ' ';
    }
    cout << '\n';
}



int main()
{
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}



int main()
{
    int tc=1;
    cin>>tc;
    while(tc--){
        solve();
    }
}


    
