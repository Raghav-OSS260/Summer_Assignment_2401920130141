class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int>record(256,0);
        vector<int>test(256,0);
        for(int i=0;i<magazine.size();i++)
        {
            record[magazine[i]]++;
            
        }
        for(int i=0;i<ransomNote.size();i++)
        {
          test[ransomNote[i]]++;
            
        }

        for(int i=0; i<256;i++)
        { 
           if(test[i]>record[i])
           return false;
        }
        return true;

    }
};