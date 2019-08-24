class Solution {
public:
    int romanToInt(string s) {
    map < char, int > symbolValue = { { 'I', 1 },
                                      { 'V', 5 },
                                      { 'X', 10 },
                                      { 'L', 50 },
                                      { 'C', 100 },
                                      { 'D', 500 },
                                      { 'M', 1000 } };
    int toRet = 0;
    char prevSymbol = 'I';
    for( int i=s.length()-1; i >=0; --i )
    {
        if( symbolValue[prevSymbol] <= symbolValue[ s[i] ] )
        {
            toRet += symbolValue[ s[i] ];
        }
        else
        {
            toRet -= symbolValue[ s[i] ];
        }
        prevSymbol = s[i];
     }
    return toRet;
    }
};