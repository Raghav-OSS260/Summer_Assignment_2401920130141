class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>>num;
        int n =nums.size();
        vector<int>ans;
        int left=0;
        int right=n-1;
        for(int i=0;i<n;i++)
        {
            num.push_back({nums[i],i});
        }
        sort(num.begin(),num.end());
        while(left<right)
        {
            int sum=num[left].first+num[right].first;
            if(sum==target)
            {
                ans.push_back(num[left].second);
                ans.push_back(num[right].second);
                return ans;
            }
            else if(sum<target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return {-1,-1};
    }
};