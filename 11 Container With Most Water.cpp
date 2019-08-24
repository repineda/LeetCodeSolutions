class Solution {
public:
    int maxArea(vector<int>& height) {
    int i = 0;
    int j = height.size() - 1;
    int max = 0;
    int vol = 0;
    while(i < j)
    {
        vol = (j - i)* min(height[i], height[j]);
        if (vol > max)
        {
            max = vol;
        }
        if(height[i] > height[j])
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return max;
    }
};