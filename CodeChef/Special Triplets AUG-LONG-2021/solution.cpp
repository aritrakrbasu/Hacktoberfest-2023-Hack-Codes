#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
   vector <vector <int> > a;
    
 for(int n=2;n<=100100;n++)   
 {   vector<int> temp;
     for(int i = 1; i * i < n; i++)
	{
		if (n % i == 0)
			{temp.push_back(i);}
	}
	for(int i = sqrt(n); i > 1; i--)
	{
		if (n % i == 0)
			{temp.push_back (n / i);}
	}
	a.push_back(temp);
 }
    
    
    while(t--)
    {  int num,ans=0;
       cin>>num;
       for(int n=2;n<=num;n++)
         {
             for(int c=0;c<a[n-2].size();c++)
               {
                   ans+=(num-a[n-2][c])/n + 1;
               }
                
         }
 
    
    cout<<ans<<"\n";    
    }
	return 0;
  
  //this solution is contributed by shaheen_senpai (code chef ID)
}
