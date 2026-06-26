class Solution {
public:
    void preorder(TreeNode* root, vector<int>& nums)
    {
        if(root == NULL)
        {
            nums.push_back(-10001); 
            return;
        }

        nums.push_back(root->val);
        preorder(root->left, nums);
        preorder(root->right, nums);
    }

    bool isSameTree(TreeNode* p, TreeNode* q)
    {
        vector<int> first;
        vector<int> second;

        preorder(p, first);
        preorder(q, second);

        return first == second;
    }
};