class Solution {
public:
string solve(string &s , int &i)
{
    string ans="";
    while(i<s.size() && s[i]!=']')
    {
       if(isalpha(s[i]))
       {
        ans+=s[i];
        i++;
       }
       else
       {
         int num=0;
         while(i<s.size() && isdigit(s[i]))
         {
            num=num*10+(s[i]-'0');
            i++;
         }
         i++;
         string temp= solve(s,i);
         i++;
         while(num--)
         ans+=temp;
       }
    }
    return ans;

}
public:
    string decodeString(string s)
     {
        int i=0;
        return solve(s,i);
    }
};