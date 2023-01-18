class Solution {
public:
    pair<int, int> solve(TreeNode* t)
    {
        if(t==NULL)
        return {0,0};
        auto p1=solve(t->left);
        auto p2=solve(t->right);
        pair<int, int> p;
        p.first=t->val+p1.second+p2.second;
        p.second=max(p1.first, p1.second)+max(p2.first, p2.second);
        return p;
    }
    int rob(TreeNode* root) {
       auto p= solve(root);
       return max(p.first, p.second);
    }
};
