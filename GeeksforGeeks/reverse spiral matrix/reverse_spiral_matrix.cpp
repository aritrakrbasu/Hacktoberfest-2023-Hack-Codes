class Solution {
  public:
    vector<int> reverseSpiral(int n, int m, vector<vector<int>>&a)  {
        // code here
        vector<int>b;
        int u=0,d=n-1,l=0,r=m-1;
        while(u<=d && l<=r)
        {
            int i,j;
            for(i=l;i<=r;i++)
            {
                b.push_back(a[u][i]);
            }
            u++;
            if(u>d || l>r)
            break;
            for(i=u;i<=d;i++)
            {
                b.push_back(a[i][r]);
            }
            r--;
            if(u>d || l>r)
            break;
            for(i=r;i>=l;i--)
            {
                b.push_back(a[d][i]);
            }
            d--;
            if(u>d || l>r)
            break;
            for(i=d;i>=u;i--)
            {
                b.push_back(a[i][l]);
            }
            l++;
            if(u>d || l>r)
            break;
        }
        reverse(b.begin(),b.end());
        return b;
    }
};
