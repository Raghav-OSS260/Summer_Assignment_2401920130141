class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n=s.size();
        int m=p.size();
        vector<int>ans;
        if(n<m) return ans;
        vector<int>need(26,0);
        vector<int>window(26,0);
        for(int i=0;i<m;i++)
        {
            need[p[i]-'a']++;
            window[s[i]-'a']++;

        }
        if(need==window) ans.push_back(0);
        for(int i=m;i<n;i++)
        {
            window[s[i]-'a']++;
            window[s[i-m]-'a']--;
            if(need==window)
            {
               ans.push_back(i-m+1);
            }
        }
        return ans;
    }

};