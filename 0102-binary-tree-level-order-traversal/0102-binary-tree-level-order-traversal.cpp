/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;

        if(!root){
            return ans;
        }

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            int s = q.size();
            vector<int>v;
            while(s--){
                TreeNode* g = q.front();
                v.push_back(q.front() -> val);
                q.pop();
                if(g->left) q.push(g->left);
                if(g->right) q.push(g->right);

            }
            ans.push_back(v);
        }
        return ans;
        
    }
};