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
    int rangeSumBST(TreeNode* root, int L, int R)
    {
        if(root!=NULL)
        {
            if(root->val>=L)
                if(root->val<=R)
                {
                    return root->val +
                    rangeSumBST(root->left,L,R) +
                    rangeSumBST(root->right,L,R);
                }    
                else
                    return rangeSumBST(root->left,L,R);
            else
                return rangeSumBST(root->right,L,R);
        }   
        return 0;
    }
};