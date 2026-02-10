/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:

    void dfs(TreeNode* root, TreeNode* p, TreeNode* q, TreeNode* & answer){

        if(root == nullptr){
            return;
        }

        dfs(root->left, p, q, answer);
        dfs(root->right, p, q, answer);

        if(
            (p->val <= root->val && q->val >= root->val) || 
            (p->val >= root->val && q->val <= root->val)
        ){
            answer = root;
        }

    }

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        TreeNode* answer;

        dfs(root, p, q, answer);

        return answer;

    }
};