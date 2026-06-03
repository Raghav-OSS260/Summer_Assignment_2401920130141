class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);

        int left = 0, right = n - 1, idx = n - 1;

        while (left <= right) 
        {
            if (abs(nums[left]) > abs(nums[right])) {
                ans[idx--] = nums[left] * nums[left];
                left++;
            } else {
                ans[idx--] = nums[right] * nums[right];
                right--;
            }
        }
        return ans;
    }
};

