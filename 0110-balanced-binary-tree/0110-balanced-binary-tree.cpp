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

    int dfs(TreeNode* node, bool &balance){

        if(node == nullptr){
            return 0;
        }

        int left = dfs(node->left, balance);
        int right = dfs(node->right, balance);

        if(left - right > 1 || right - left > 1){
            balance = false;
        }

        return 1 + max(left, right);



    }

    bool isBalanced(TreeNode* root) {
        
        bool balance = true;
        dfs(root, balance);

        return balance;
    }
};