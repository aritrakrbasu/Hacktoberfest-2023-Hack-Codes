// Author : Sourav Prasad Sah
// Question Link : https://www.codechef.com/submit/NPAIRS?tab=statement

# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    ll N;
    cin>>N;
    string s;
    cin>>s;
    ll ans=0;
    for (ll i = 0; i < N; i++)
    {
        /* code */
        for (ll j = i+1; j<i+10 && j<N; j++)
        {
            /* code */
            if(j-i==abs(s[i]-s[j])){
                ans++;
            }
        }
        
    }
    cout<<ans<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    long long T;
    cin>>T;       
    while (T--)    
    {
        solve();
    }   
}
