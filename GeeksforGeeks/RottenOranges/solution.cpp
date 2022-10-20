#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    bool is_safe (int x , int y , int n , int m )
    {
        return x>=0 && x<n && y>=0 && y<m ;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        vector<pair<int,int>> dirxns {{-1,0},{1,0},{0,-1},{0,1}};
        
        queue<pair<int , int >> q;//for position of rotten oranges 
        int min_time = -1;
        for (int i=0 ;i<n ;i++)
        {
            for (int j =0 ;j<m ;j++)
            {
                if (grid[i][j]==2)
                {
                    q.push({i,j});
                }
            }
        }
        
        while (q.size())
        {
            int cnt = q.size();
            while (cnt--)
            {
                auto p = q.front();
                int x = p.first ;
                int y = p.second;
                
                for (auto d : dirxns)
                {
                    int new_x = d.first + x;
                    int new_y = d.second + y;
                    if (is_safe(new_x , new_y , n , m) && grid[new_x][new_y]==1)
                    {
                        grid[new_x][new_y] = 2;
                        q.push({new_x, new_y});
                    }
                }
                
                q.pop();
            }
            min_time++;
        }
        
        for (int i=0 ;i<n ;i++)
        {
            for (int j =0 ;j<m ;j++)
            {
                if (grid[i][j]==1)
                return -1;
            }
        }
        
        return min_time;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		int ans = obj.orangesRotting(grid);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends
