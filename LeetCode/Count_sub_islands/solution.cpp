class Solution {
public:
    int n,m;
    int nx[4]={0,0,-1,1};
    int ny[4]={-1,1,0,0};
    
    void solve(int i, int j, vector<vector<int>>& g1, vector<vector<int>>& g2, int &cnt)
    {
        if(i<0 || j<0 || i>=n || j>=m || g2[i][j]==0) return;
        
        if(g1[i][j]==0 && g2[i][j]==1) {cnt=0;return;}
        g2[i][j]=0;
        
        for(int k=0;k<4;k++)
        {
            int x= i+nx[k];
            int y= j+ny[k];
            
            solve(x,y,g1,g2,cnt);
        }
        
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) 
    {
        n=grid1.size();
        m=grid1[0].size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if( grid2[i][j]==1)
                {
                    int cnt=1;
                    solve(i,j,grid1, grid2, cnt);
                    ans+=cnt;
                }
            }
        }
        return ans;
    }
};
