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
    void pastTravel(TreeNode *root, vector<int> &res){
        if(root){
            pastTravel(root->left, res);
            res.push_back(root->val);
            pastTravel(root->right, res);  
        }
    }
    int kthLargest(TreeNode* root, int k) {
        vector<int> res;
        pastTravel(root, res);
        int l = res.size();
        return res[l-k];
    }
};