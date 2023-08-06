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
    int checkmaxdepth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        int l = checkmaxdepth(root -> left);
        int h = checkmaxdepth(root -> right);
        if(abs(l-h)>1){
            return -1;
        }
        if(l == -1 || h == -1){
            return -1;
        }
        return 1 + max(l,h);
        }
    bool isBalanced(TreeNode* root) {
        
        if(checkmaxdepth(root) == -1){
            return false;
        }
        else{
            return true;
        }
    }
};