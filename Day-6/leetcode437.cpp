// Path Sum III

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
    
    long long sum=0;
    int count=0;
    
    void ans(TreeNode* &root, int &targetSum){
        if(root==NULL)
            return;
        
        sum+=root->val;
        if(sum == targetSum){
            count++;
        }
        
        ans(root->left, targetSum);
        ans(root->right, targetSum);
        sum -= root->val;
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        if(root == NULL)
            return 0;
        
        ans(root->left, targetSum);
        ans(root->right, targetSum);
        return count;
    }
};