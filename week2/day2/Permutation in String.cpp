class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       int n=s1.size();
       int m =s2.size();
       if(n>m) 
       {
        return false;
       }
       vector<int>target(26,0);
       vector<int>window(26,0);
         for (char ch : s1)
         {
            target[ch - 'a']++;
         }
        for (int i = 0; i < n; i++)
        {
            window[s2[i] - 'a']++;
        }
        if(target==window) return true;
        for(int i=n;i<m;i++)
        {
             window[s2[i]-'a']++;
             window[s2[i-n]-'a']--;
             if(window==target)
             {
                return true;
             }
        }
return false;
        
    }
};