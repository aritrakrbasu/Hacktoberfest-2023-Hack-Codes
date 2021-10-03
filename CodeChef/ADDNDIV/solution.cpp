//Author : Sundar

//Logic: N and M can contribute to the answer only if M has all the divisors that N has.

// So take the divisors of N and M simultaneously and stop when one of them becomes 1

#include<iostream>
using namespace std;
void solve()
{
    int n,m;
  
   cin>>n>>m;

  if(n==m)
  {
	  cout<< "YES\n";
	  return;
  }
	if(n%2==0)
	{
		if(m%2)
		{
			cout<< "NO\n";
			return;
		}
		while(n%2==0) n/=2;
		while(m%2==0) m/=2;
	}
	for(int i=3;i*i<=n;i+=2)
	{
		if(n==1)
		{
			cout<< "YES\n";
			return;
		}
		else if(m==1)
		{
			cout<< "NO\n";
			return;
			
		}
		
		if(n%i==0)
		{
			if(m%i!=0)
			{
				cout<< "NO\n";
				return;
			}
			while(n%i==0) n/=i;
			while(m%i==0) m/=i;
		}
	}
	if(m%n==0)
	{
		cout<< "YES\n";
		
	}
	else cout<< "NO\n";
	
    
   
        
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        
    
     int t=1;
    cin>>t;
    for(int _=0;_<t;_++)
    {   
        solve();
    }
        

    return 0;

}