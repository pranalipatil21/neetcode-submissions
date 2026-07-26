class Solution {
public:
//optimized
    int robbery(vector<int>&nums,int start,int end){
        int prev2 = nums[start], prev = max(nums[start],nums[start+1]);
        if(start==end) return nums[start];        
        for(int i=start+2;i<=end;i++){
            int curr = max(nums[i]+prev2, prev);
            prev2=prev;
            prev = curr;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int n= nums.size();
        if(n==1) return nums[0];
        return max(robbery(nums,0,n-2),robbery(nums,1,n-1));
        
    }
};
