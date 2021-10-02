Problem Link:"https://leetcode.com/problems/binary-tree-level-order-traversal/"

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>v;
        if(root==NULL) return v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>v1;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp=q.front();
                q.pop();
                v1.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            v.push_back(v1);
        }
        return v;
    }
};