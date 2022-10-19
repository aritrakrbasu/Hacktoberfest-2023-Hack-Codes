# include <bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve(){
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if((b==d && f<b) || (d==f && b<d) || (f==b && d<b)){
        if(b==d)   cout<<abs(a-c)<<"\n";
        else if(d==f) cout<<abs(c-e)<<"\n";
        else cout<<abs(a-e)<<"\n";
    }else{
        cout<<0<<"\n";
    }
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
