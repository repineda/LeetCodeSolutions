class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
    int min = INT_MAX;
    int toRet = 0;
    sort(nums.begin(), nums.end());
    for (unsigned int i=0; i<nums.size(); i++) {
        if ((i>0) && (nums[i]==nums[i-1]))
        {continue;}
        int left = i+1;
        int right = nums.size()-1;
        while (left < right) {
            int sum = nums[i]+nums[left]+nums[right];
            if (sum == target)
            {
                return target;

            }
            else if (sum < target)
            {
                if(target - sum < min)
                {
                    min = target - sum;
                    toRet = sum;
                }
                left++;
            }
            else {
                if ( sum - target < min){
                    min = sum - target;
                    toRet = sum;
                }
                right--;
            }
        }
    }
    return toRet;
}
};