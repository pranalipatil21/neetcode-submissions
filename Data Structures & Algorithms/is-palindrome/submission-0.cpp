class Solution {
public:

    string cleanString(string &s){
        string result;
        result.reserve(s.size());
        for(unsigned char ch: s){
            if(isalnum(ch))
                result.push_back(tolower(ch));
        }
        return result;
    }
    bool isPalindrome(string s) {
        string s1 = cleanString(s);
        int start = 0, end = s1.length()-1;
        while(start<end){
            if(s1[start] != s1[end])
            {
               return false;
            }
            start++;
            end--;
        }
        return true;

    }
};
