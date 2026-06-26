/**
 * Definition for a binary tree node.
 * struhttps://assets.leetcode.com/uploads/2021/02/19/tree1.jpg$0ct TreeNode {
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if(root == NULL) return ans;

        queue<TreeNode*> q;
        q.push(root);

        int level = 0;

        while(!q.empty()) 
        {
            int n = q.size();
            vector<int> curr;

            for(int i = 0; i < n; i++) {
                TreeNode* node = q.front();
                q.pop();

                curr.push_back(node->val);

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }

            if(level % 2 == 1)
                reverse(curr.begin(), curr.end());

            ans.push_back(curr);
            level++;
        }

        return ans;
    }
};