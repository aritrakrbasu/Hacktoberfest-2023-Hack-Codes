#include <bits/stdc++.h>
using namespace std;

#define tc ll t sc cin>> t sc while(t--)
#define sc;
#define ll long long


int main() {
 tc{
     ll x,y;
     cin>>x>>y;
     
     if(abs(x)==abs(y)){
         cout<<"YES\n";
     }
     else if((abs(x)-abs(y)) % 2==0){
         cout<<"YES\n";
     }
     else{
         cout<<"NO\n";
     }
    }
	return 0;
}
