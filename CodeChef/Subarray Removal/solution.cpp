# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    ll N;
    cin>>N;
    vector<ll> arr(N);
    ll a=0,b=0;
    for (ll i = 0; i < N; i++)
    {
        /* code */
        cin>>arr[i];
        if(arr[i]==0){
            a++;
        }else{
            b++;
        }
    }
    ll ans=min(a,b);
    if(b>a){
        ans +=(b-a)/3;
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
