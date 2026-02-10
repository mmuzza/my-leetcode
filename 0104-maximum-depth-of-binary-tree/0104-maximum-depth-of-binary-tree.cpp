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

    //.    1
    //.   / \
    //       2

    int dfs(TreeNode* node, int &totalDepth){

        if(node == nullptr){
            return 0;
        }

        int left = dfs(node->left, totalDepth);
        int right = dfs(node->right, totalDepth);

        return 1 + max(left, right);


    }

    int maxDepth(TreeNode* root) {

        if(root == nullptr){
            return 0;
        }
        
        int totalDepth = 0;

         return dfs(root, totalDepth);

        // return totalDepth+1;
    }
};