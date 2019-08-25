class Solution {
private:
    void combinations(string digits, string& combo, int curr, unordered_map<char, string> num_to_char, vector<string>& toRet )
    {
        if (curr == digits.length()){
            toRet.push_back(combo);
            return;
        }
        for (char c : num_to_char[digits[curr]]){
            combo[curr] = c;
            combinations(digits, combo, curr + 1, num_to_char, toRet);
        }
    }
public:
    vector<string> letterCombinations(string digits)
    {
        if (digits.empty()) 
        {
            return {};
        }
        unordered_map<char, string> num_to_char {{'2', "abc"},
                                              {'3', "def"},
                                              {'4', "ghi"},
                                              {'5', "jkl"},
                                              {'6', "mno"},
                                              {'7', "pqrs"},
                                              {'8', "tuv"},
                                              {'9', "wxyz"}};
        vector<string> toRet;
        string combo(digits.length(), ' ');
        combinations(digits, combo, 0, num_to_char, toRet);
        return toRet;
    }
};