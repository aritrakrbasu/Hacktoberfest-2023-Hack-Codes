#include <iostream>
using namespace std;

int main()
{
    int s,t,a,b,m,n;
    int x=0,y=0;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;
    int apple[m],orange[n];
    for (int i=0; i<m; i++) {
    cin>>apple[i];
    apple[i]=apple[i]+a;
    }
    for (int i=0; i<n; i++) {
    cin>>orange[i];
    orange[i]=orange[i]+b;
    }
    for (int i=0; i<m; i++) {
    if(apple[i]>=s && apple[i]<=t)
    {
        x++;
    }
    }
    for (int i=0; i<n; i++) {
    if(orange[i]>=s && orange[i]<=t)
    {
        y++;
    }
    }
    cout<<x<<endl<<y<<endl;
    
        
}

