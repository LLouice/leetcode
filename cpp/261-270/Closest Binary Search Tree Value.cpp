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
    int closestValue(TreeNode* root, double target) {
        
        double diff(fabs(root->val - target));
        int v = root->val;
        
        while(root)
        {
            if(fabs(root->val - target) <= diff)
            {
                diff = fabs(root->val - target);
                v = root->val;
            }
            
            if(target <= root->val) {
                root = root->left;
            } else {
                root = root->right;
            }
        }
        
        return v;
    }
};