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

    void dfs(TreeNode* node){

        if(node->left == nullptr && node->right == nullptr){
            return;
        }

        if(node->left){
            dfs(node->left);
        }
        if(node->right){
            dfs(node->right);
        }


        TreeNode* temp = node->left;
        node->left = node->right;
        node->right = temp;

    }

    TreeNode* invertTree(TreeNode* root) {

        if(root == nullptr){
            return nullptr;
        }


        dfs(root);

        return root;
        
    }
};