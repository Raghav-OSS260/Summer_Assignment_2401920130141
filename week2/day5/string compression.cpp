class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int n=chars.size();
        int i=0;
        int j=0;
        while(i<n)
        {
            char current =chars[i];
            int count =0;
            while(i<n && chars[i]==current)
            {
                count++;
                i++;
            }
            chars[j]=current;
            j=j+1;
            if(count>1)
            {
                string cnt = to_string(count);
                for(char c: cnt)
                {
                    chars[j]=c;
                    j++;

                }
            }
        }
        return j;
    }
};