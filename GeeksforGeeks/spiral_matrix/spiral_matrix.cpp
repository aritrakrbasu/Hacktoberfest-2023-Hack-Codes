include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int findK(vector<vector<int>> &a, int n, int m, int r)
    {
        // Your code goes her
        int i=0,j=0;
        int k=0,l=0;
        int c=0,x=n*m;
        vector<int>b;
        i=0,j=0;
        while(c<x)
        {
            while(j<m)
            {
                if(c==x)
                break;
                b.push_back(a[i][j]);
                c++;
                j++;
            }
            j--;//j==m-1
            i++;//i=1
            m--;
            while(i<n)
            {
                if(c==x)
                break;
                b.push_back(a[i][j]);
                c++;
                i++;
            }
            
            i--;//i=n-1
            j--;//j=1
            n--;
            while(j>=l)
            {
                if(c==x)
                break;
                b.push_back(a[i][j]);
                c++;
                j--;
            }
            j++;//j=0
            i--;//i=n-2
            l++;
            while(i>k)
            {
                if(c==x)
                break;
                b.push_back(a[i][j]);
                c++;
                i--;
            }
            i++;
            j++;
            k++;
        }
        return b[r-1];
    }
};

// { Driver Code Starts.

int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        vector<vector<int>> a(n, vector<int>(m, 0));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }

        Solution obj;

        cout<< obj.findK(a, n, m, k) << "\n";
        
       
    }
}  // } Driver Code Ends
