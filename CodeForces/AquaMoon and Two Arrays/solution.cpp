#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ff(i,a,b) for( ll i=a;i<b;i++)
#define fb(i,a,b) for( ll i=a;i>=b;i--)
#define tc() int t; cin>> t; while (t--)
#define MOD 1000000007
#define vec vector<ll>
#define pb push_back
#define all(x) x.begin(),x.end()
int main()
{ios_base::sync_with_stdio(false);
    cin.tie(NULL);
tc()
{
	ll n;cin>>n;
	vec a(n),b(n);
	ff(i,0,n)
	cin>>a[i];
	ff(i,0,n)
	cin>>b[i];
	vec c(n);
	ll p=0,ne=0;
	ff(i,0,n)
	{
		if(a[i]-b[i]>0)
		{
			p+=a[i]-b[i];
		}
		else
		{
			ne+=a[i]-b[i];
		}
		c[i]=a[i]-b[i];
	}
	// cout<<t<<" "<<p<<" "<<ne<<" ";
	vec ans1,ans2;
	if(p+ne!=0)
	{
		cout<<"-1\n";
	}
	else
	{
		cout<<p<<"\n";
		ff(i,0,n)
		{
			if(c[i]>0)
			{
				while(c[i]--)
				{
					ans1.pb(i+1);
				}
			}
			else if(c[i]<0)
			{
				while(c[i]!=0)
				{
					ans2.pb(i+1);
					c[i]++;
				}
			}
		}
		
		ff(i,0,p)
		{
			cout<<ans1.at(i)<<" "<<ans2.at(i)<<"\n";
		}
		
	}

}
return 0;}
//PRATIK_SINGH!!

// ░█████╗░░░░░░░░░░░░░░░
// ██╔══██╗░░██╗░░░░██╗░░
// ██║░░╚═╝██████╗██████╗
// ██║░░██╗╚═██╔═╝╚═██╔═╝
// ╚█████╔╝░░╚═╝░░░░╚═╝░░
// ░╚════╝░░░░░░░░░░░░░░░