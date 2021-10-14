#include <bits/stdc++.h>

using namespace std;

#define intl long long int

int main() {

    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

	int t;      cin>>t;

      while(t--)

      {

          intl n,p,k,count=0,ans=0;

          bool flag=false;

          cin>>n>>p>>k;

          intl var=p%k, temp=n%k ,sum[k];

                                                //cout<<var<<"var  ";

                                                

          if(temp<var)

           count=1+p/k+temp;

           else

           count=1+p/k+var;

           

           if(var)

           cout<<( (n/k)*var + count );

           else

           cout<<(p/k)+1;

           

           cout<<"\n";

      }

	return 0;

}
