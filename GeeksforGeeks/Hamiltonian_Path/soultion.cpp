// Author: Shraddha Singh Gaur
// Question Link: https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // function to check if all nodes are visited
    bool allvis(int vis[], int n)
    {
        for (int i = 1; i < n + 1; i++)
        {
            if (vis[i] == 0)
                return false;
        }
        return true;
    }

    void dfs(int i, int n, vector<int> adj[], int vis[])
    {
        vis[i] = 1;
        for (auto it : adj[i])
        {
            if (!vis[it])
            {
                dfs(it, n, adj, vis);
                if (allvis(vis, n))
                    return;
                else
                    vis[it] = 0;
            }
        }
    }

    bool check(int N, int M, vector<vector<int>> Edges)
    {
        // create arn array vis to keep track on visited nodes
        // set all to not-visited (set all 0)
        int vis[N + 1];
        memset(vis, 0, sizeof vis);

        // create adjacency matrix
        vector<int> adj[N + 1];
        for (int i = 0; i < M; i++)
        {
            adj[Edges[i][0]].push_back(Edges[i][1]);
            adj[Edges[i][1]].push_back(Edges[i][0]);
        }

        //loop through all the nodes
        // for each node do dfs and check if all nodes are visited
        // if even for a single node its true that starting from one node all nodes can be visited then that is hamilton path.
        for (int i = 1; i < N + 1; i++)
        {
            if (!vis[i])
            {
                dfs(i, N, adj, vis);
                if (allvis(vis, N))
                    return true;
                else
                    vis[i] = 0;
            }
        }
        return false;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, X, Y;
        cin >> N >> M;
        vector<vector<int>> Edges;
        for (int i = 0; i < M; i++)
        {
            cin >> X >> Y;
            Edges.push_back({X, Y});
        }
        Solution obj;
        if (obj.check(N, M, Edges))
        {
            cout << "1" << endl;
        }
        else
            cout << "0" << endl;
    }
}