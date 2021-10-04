class Solution {
public:
    
    static bool cmp(string &a, string &b){
        int a1 = stoi(a);
        int b1 = stoi(b);
        
        return a1<b1;
    }
    
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<string> table;
        vector<string> dish;
        unordered_set<string> s;
        for(auto &x: orders){
            if(!s.count(x[1])){
                table.push_back(x[1]);
                s.insert(x[1]);
            }
            if(!s.count(x[2])){
                dish.push_back(x[2]);
                s.insert(x[2]);
            }
        }
        
        sort(table.begin(), table.end(), cmp);
        sort(dish.begin(), dish.end());
        int m = table.size();
        int n = dish.size();
        
        vector<vector<string>> ans(m+1,vector<string>(n+1,"0"));
        unordered_map<string,int> mp;
		
        ans[0][0] = "Table";
		
        for(int i=1;i<=dish.size();i++){
            mp[dish[i-1]] = i;
            ans[0][i] = dish[i-1];
        }
        for(int i=1;i<=table.size();i++){
            mp[table[i-1]] = i;
            ans[i][0] = table[i-1];
        }
        
        for(auto &x: orders){
            string a = ans[mp[x[1]]][mp[x[2]]];
            int o = stoi(a);
            ++o;
            ans[mp[x[1]]][mp[x[2]]] = to_string(o);
        }
   
        return ans;
        
    }
};