class Solution {
public:
    //top down
    int robbery(int i, vector<int>&nums,vector<int>&dp){
        if(i==0) return nums[0];
        if(i==1) return max(nums[0],nums[1]);
        if(dp[i]!=-1) return dp[i];

        return dp[i] = max(nums[i]+robbery(i-2,nums,dp), robbery(i-1,nums,dp));
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return robbery(n-1, nums, dp);    }
};
