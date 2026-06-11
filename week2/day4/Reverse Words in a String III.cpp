class Solution {
public:
    string reverseWord(string s) {
        if (s.size() <= 1) return s;
        return reverseWord(s.substr(1)) + s[0];
    }

    string reverseWords(string s) {
        int pos = s.find(' ');
        
        if (pos == string::npos) 
        {
            return reverseWord(s);
        }

        string firstWord = s.substr(0, pos);
        string remaining = s.substr(pos + 1);

        return reverseWord(firstWord) + " " + reverseWords(remaining);
    }
};