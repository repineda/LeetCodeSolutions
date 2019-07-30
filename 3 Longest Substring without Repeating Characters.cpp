class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_len = 0;
        string str = "";
        for(int i = 0; i < s.length(); i++){
            char c = s[i];
            int k = str.find(c);
            if(k > -1){
                str = str.substr(k + 1);
            }
            str += c;
            if(str.length() > max_len){
                max_len = str.length();
            }
        }
        return max_len;
    }
};