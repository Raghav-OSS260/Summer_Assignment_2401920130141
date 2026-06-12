class Solution {
public:
    
    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        
        int n = s.size();
        
        int maxLen = 0;
        string ans = "";

        for (int i = 0; i < n; i++) {

            for (int j = i; j < n; j++) {

                if (isPalindrome(s, i, j)) {

                    int len = j - i + 1;

                    if (len > maxLen) {
                        maxLen = len;
                        ans = s.substr(i, len);
                    }
                }
            }
        }

        return ans;
    }
};