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

    bool dfs(TreeNode* p, TreeNode* q, bool &equal){

        if(p == nullptr && q == nullptr){
            // return;
            return true;
        }

        if(p == nullptr || q == nullptr){
            // equal = false;
            return false;
        }

        if(p->val != q->val){
            // equal = false;
            return false;
        }

        // dfs(p->left, q->left, equal);
        // dfs(p->right, q->right, equal);

        return dfs(p->left, q->left, equal) && dfs(p->right, q->right, equal);

    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        bool equal = true;
        // dfs(p, q, equal);

        // return equal;

        return dfs(p, q, equal);
        
    }
};