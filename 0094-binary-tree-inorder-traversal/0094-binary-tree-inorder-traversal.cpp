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

    void dfs(TreeNode* node, vector<int> & results){

        if(node == nullptr){
            return;
        }

        
        dfs(node->left, results);
        results.push_back(node->val);
        dfs(node->right, results);
   


    }

    vector<int> inorderTraversal(TreeNode* root) {

        if(root == nullptr){
            return {};
        }

        vector<int> answer;
        dfs(root, answer);
        
        return answer;
    }
};