// 872. Leaf-Similar Trees


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
    
    void CountLeaves(TreeNode* root1, vector<int> &v1){
        if(!root1)
            return;
        
        if(!root1->left && !root1->right){
            v1.push_back(root1->val);
            return;
        }
        
        CountLeaves(root1->left, v1);
        CountLeaves(root1->right, v1);    
    }
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        
        vector<int> v1, v2;
        CountLeaves(root1, v1);
        CountLeaves(root2, v2);
        return (v1==v2);
        
    }
};