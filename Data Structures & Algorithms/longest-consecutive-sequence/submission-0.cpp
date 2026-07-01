class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(auto it: nums){
            s.insert(it);
        }
        int ans = 0;
        for(auto num: s){
            if(s.find(num-1)==s.end()){
                int curr = num;
                int len = 1;
                while(s.find(curr+1)!=s.end()){
                len++;
                curr++;
                 }
            ans = max(len, ans);
            }           
        }
        return ans;
    }
};
