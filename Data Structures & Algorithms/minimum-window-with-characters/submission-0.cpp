class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mp;

        for(int i=0; i<t.size(); i++){
            mp[t[i]]++;
        }
        int n = s.size();
        int total = t.size();

        int start = 0, end =0, ans = INT_MAX, ind = -1;
        while(end<n){
            mp[s[end]]--;
            if(mp[s[end]]>=0)
                total--;
            while(!total && start<=end){
                if(ans > (end-start+1)){
                    ans = end-start+1;
                    ind = start;
                }
                mp[s[start]]++;
                if(mp[s[start]]>0)
                    total++;
                start++;
            }
            end++;
        }
        if(ind == -1)
            return "";
            string str = "";
            for(int i= ind; i<ind+ans;i++){
                str += s[i];
            }
            return str;
    }
};
