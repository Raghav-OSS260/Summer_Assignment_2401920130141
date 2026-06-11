class Solution {
public:
    void solve(int n, vector<string>& ans, int left, int right, string temp)
    {
        if (left == n && right == n)
        {
            ans.push_back(temp);
            return;
        }

        if (left < n)
        {
            temp.push_back('(');
            solve(n, ans, left + 1, right, temp);
            temp.pop_back();
        }

        if (right < left)
        {
            temp.push_back(')');
            solve(n, ans, left, right + 1, temp);
            temp.pop_back();
        }
    }

    vector<string> generateParenthesis(int n)
    {
        vector<string> ans;
        solve(n, ans, 0, 0, "");
        return ans;
    }
};