class Solution {
private:
    void addParen(int n, int left, int right, string parentheses, vector<string>& p)
    {
        if (left == n && right == n) 
        {
                p.push_back(parentheses);
        } 
        else 
        {
            if (left < n) 
            {
                addParen(n, left + 1, right, parentheses + '(', p);
            }
            if (right < left) 
            {
               addParen(n, left, right + 1, parentheses + ')', p);
            }
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> toRet;
        string parentheses;
        addParen(n, 0, 0, parentheses, toRet);
        return toRet;
    }
};