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

    int dfs(TreeNode* node, int &total){

        if(node == nullptr){
            return 0;
        }

        
        int left = dfs(node->left, total);
        int right = dfs(node->right, total);

        int maximumSide = max(left, right);

        total = max(total, left+right);


        return maximumSide + 1;

    }

    int diameterOfBinaryTree(TreeNode* root) {

        int total = 0;
        dfs(root, total);

        return total;

    }
};