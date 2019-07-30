class Solution {
public:
int reverse(int x) {
        int output = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (output> INT_MAX/10 ) return 0;
            if (output < INT_MIN/10) return 0;
            output  = output * 10 + pop;
        }
        return output;
        
    }
};