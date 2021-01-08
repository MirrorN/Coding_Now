#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode * left;
    TreeNode * right;
    TreeNode(int x): val(x), left(NULL), right(NULL){}
};
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};


/*
level travel
*/
int level_travel(TreeNode *root){
    int res = 0;
    queue<TreeNode *> que;
    if(!root)
        que.push(root);
    while(!que.empty()){
        TreeNode * tmp = que.front();
        que.pop();
        cout<<tmp->val<<endl;
        if(tmp->left)
            que.push(tmp->left);
        if(tmp->right)
            que.push(tmp->right);
        res ++;
    }
    // the number of elements;
    return res;
}
