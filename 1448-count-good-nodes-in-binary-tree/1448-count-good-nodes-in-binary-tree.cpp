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

    void dfs(TreeNode* node, int &count, int maxVal){

        if(node == nullptr){
            return;
        }

        if(node->val >= maxVal){
            count++;
        }

        dfs(node->left, count, max(node->val, maxVal));
        dfs(node->right, count, max(node->val, maxVal));

        

    }

    int goodNodes(TreeNode* root) {
        
        int count = 0;
        dfs(root, count, root->val);

        return count;
    }
};