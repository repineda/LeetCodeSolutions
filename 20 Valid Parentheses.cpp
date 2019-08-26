class Solution {
public:
    bool isValid(string s) {
    stack<char> r;
    map<char,int> pmap;
    pmap['['] = ']';
    pmap['('] = ')';
    pmap['{'] = '}';
    char temp;
    int n = s.size();
    for(int i = 0; i < n; i++)
    {
        temp = s[i];
        if(pmap.count(temp) > 0)
        {
            r.push(temp);
        }
        else if(temp == '}' || temp == ']' || temp == ')' )
        {
            if(!r.empty() && temp == pmap[r.top()])
            {
                r.pop();
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    if(r.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
    }
};