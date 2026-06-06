class Solution {
public:
    bool isAnagram(string s, string t) 
    {
       if(s.size()!=t.size()) return false;
        vector<int>first(256,0);
        vector<int>second(256,0);
        int size= t.size();
        for(int i=0;i<size;i++)
        {
            first[s[i]]++;
            second[t[i]]++;
        }
        for(int i=0;i<256;i++)
        {
            if(first[i]!=second[i])
            {
                return false;
            }
        }


return true;
        
    }
};

