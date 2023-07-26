// 1448. Count Good Nodes in Binary Tree
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
    int count=0;
    void res(TreeNode *temp, int x){
        if(temp == NULL)
            return;
        
        if(temp->val>=x)
            count++;
            
            res(temp->left, max(temp->val, x));
            res(temp->right, max(temp->val, x));
    }
    
    int goodNodes(TreeNode* root) {
        
        res(root, root->val);
        return count;
    }
};