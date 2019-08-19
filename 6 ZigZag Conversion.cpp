class Solution {
public:
    string convert(string s, int numRows) {
    if(numRows <=1 )
    {
        return s;
    }
    string toRet;
    vector<string> rows(min(numRows, int(s.size())));
    int current = 0;
    bool down = false;

    for(int i = 0; i < s.size(); i++)
    {
        rows[current] += s[i];
        if(current == 0 || current == numRows - 1)
        {
            down = !down;
        }
        if(down)
        {
            current += 1;
        }
        else
        {
            current += -1;
        }
    }
    for(int i = 0; i < rows.size(); i++)
    {
        toRet += rows[i];
    }
    return toRet;
        
    }
};