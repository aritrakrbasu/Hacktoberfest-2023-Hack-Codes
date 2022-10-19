// Author : Sourav Prasad Sah

class Solution {
public:
    bool static compareInterval(pair<int,string> &a, pair<int,string> &b)
    {
        if(a.first>b.first){
            return true;
        }else if(a.first==b.first){
            return a.second<b.second;
        }else{
            return false;
        }
    }

    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> dp;
        for(auto i : words){
            dp[i]++;
        }
        vector<pair<int,string>> arr;
        for(auto i : dp){
            arr.push_back({i.second,i.first});
        }
        sort(arr.begin(),arr.end(),compareInterval);
            vector<string> ans;
        for(int i=0;i<k;i++){
            ans.push_back(arr[i].second);
        }
        return ans;
    }
};