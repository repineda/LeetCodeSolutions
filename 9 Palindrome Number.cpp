class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0)
        {
            return false;
        }
        int n = x;
        int remainder = 0;
        long reversedNumber = 0;
        while(n != 0)
        {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
        }
        if (x == reversedNumber)
        {
            return true;
        }
        return false;

        
    }
};