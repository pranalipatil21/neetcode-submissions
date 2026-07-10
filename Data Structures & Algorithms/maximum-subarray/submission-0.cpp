class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int total = 0;
        int res = nums[0];
        for(auto num: nums){
            if(total < 0)
                total = 0;
            total += num;
            res = max(total ,res);
        }
        return res;
    }
};
