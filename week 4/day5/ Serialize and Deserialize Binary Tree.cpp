/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Codec {
public:

    void serializeHelper(TreeNode* root, string &s) {
        if (root == nullptr) {
            s += "#,";
            return;
        }

        s += to_string(root->val) + ",";
        serializeHelper(root->left, s);
        serializeHelper(root->right, s);
    }

    string serialize(TreeNode* root) {
        string s;
        serializeHelper(root, s);
        return s;
    }

    TreeNode* deserializeHelper(string &data, int &i) {
        if (i >= data.size())
            return nullptr;

        if (data[i] == '#') {
            i += 2;          // skip "#,"
            return nullptr;
        }

        string num = "";
        while (data[i] != ',') {
            num += data[i];
            i++;
        }
        i++; 

        TreeNode* root = new TreeNode(stoi(num));

        root->left = deserializeHelper(data, i);
        root->right = deserializeHelper(data, i);

        return root;
    }

    TreeNode* deserialize(string data) {
        int i = 0;
        return deserializeHelper(data, i);
    }
};