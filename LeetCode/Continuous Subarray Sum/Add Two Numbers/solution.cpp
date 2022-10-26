class Solution
{
public:
    bool checkSubarraySum(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        mp[0] = -1;
        int tot = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            tot += nums[i];
            int r = tot % k;
            if (mp.find(r) == mp.end())
            {
                mp[r] = i;
            }
            else if (i - mp[r] > 1)
            {
                return true;
            }
        }
        return false;
    }
};