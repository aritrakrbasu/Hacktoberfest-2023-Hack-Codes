#include <iostream>
using namespace std;
int main() 
{
	int t,i;
	cin  >> t;
	for(i=0;i<t;i++)
	{
	    int j,n,k;
	    cin >> n >> k;
	    int arr;
	    for(j=0;j<n;j++)
	    {
	        cin >> arr;
	    
	       if(arr>k)
	       {
	          cout << "0";
	       }
	        else
	        {
	          cout << "1";
	         k=k-arr;
	        }
	    }
	    cout << endl;
	 }
	return 0;
}
