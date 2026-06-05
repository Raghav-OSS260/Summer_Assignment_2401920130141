class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty())
        {
            return "" ;
        }
        string ans="";
        sort(strs.begin(),strs.end());
        string first= strs[0];
        string last =strs[strs.size()-1];
        int length=min(first.size(),last.size());
        for(int i=0;i<length;i++)
        {
            if(first[i]!=last[i]) break;
            ans+=first[i] ;
        }
        return ans ;

    }
};