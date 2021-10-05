//author: Misa Singh (@misa-bot)
//Question-link: https://leetcode.com/problems/rotate-array/

//SOLUTION 1
//Time: O(n) Space O(n)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int> arr;
        for(int i=n-k;i<n;i++)
            arr.push_back(nums[i]);
        for(int j=0;j<n-k;j++)
            arr.push_back(nums[j]);
        nums.assign(arr.begin(),arr.end());
     
    }
};

//SOLUTION 2
//Time: O(n) Space:O(1)
//Explanation: Reverse whole array, reverse first K elements, reverse last K elements
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k, nums.end());
        
    }
};

