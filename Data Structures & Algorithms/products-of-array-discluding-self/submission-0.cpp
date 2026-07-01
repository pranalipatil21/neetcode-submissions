class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>pre_mul(n);
        vector<int>suf_mul(n);
        vector<int>ans(n);
        pre_mul[0] = 1;
        for(int i=1; i<n;i++){
            pre_mul[i] =  pre_mul[i-1]*nums[i-1];
        }
        suf_mul[n-1] = 1;
        for(int i = n-2; i>=0;i--){
            suf_mul[i] = suf_mul[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            ans[i] = pre_mul[i]*suf_mul[i];
        }
        return ans;
    }
};
