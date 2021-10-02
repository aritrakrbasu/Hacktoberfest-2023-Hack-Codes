Problem Link:"https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/"


class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root) return ans;
        int lefttoright=1;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>v(size);
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                int index=(lefttoright)?i:size-i-1;
                v[index]=node->val;
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            
            ans.push_back(v);
            lefttoright=!lefttoright;
        }
        
        return ans;
    }
};