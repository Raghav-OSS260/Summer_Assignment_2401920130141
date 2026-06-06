class Solution {
public:
    int firstUniqChar(string s) 
    {
         int size=s.size();
       vector<int>record(256,0);

         for(int i=0;i<size;i++)
         {
             record[s[i]]++;

         }
   for(int i=0;i<size;i++)
   {
      if(record[s[i]]==1)
      return i;
   }
   return -1;

             
    }
};