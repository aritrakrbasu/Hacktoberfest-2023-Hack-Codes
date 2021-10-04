class Solution {
    static bool compare(const int&a , const int&b)
    {
        return a>b;
    }
    
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n=nums.size();
        vector<int>v(n+1,0);
        for(int i=0;i<requests.size();i++)
        {
            v[requests[i][0]]++;
            v[requests[i][1]+1]--;
        }
        for(int i=1;i<n;i++)
        {
            v[i]+=v[i-1];
        }
        long long ans=0;
        long long cv = 1e9+7;
        priority_queue<long long>pq;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=0)
            {
                pq.push(v[i]);
            }
        }
        sort(nums.begin(),nums.end(),compare);
        int j=0;
        while(!pq.empty() && j<nums.size())
        {
            ans+= (nums[j]*pq.top())%1000000007;
            pq.pop();
            j++;
        }
        return ans%cv;
    }
};