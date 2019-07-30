class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> valuePositionMap;
        int difference = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            difference = target - nums[i];
            if (valuePositionMap.find(nums[i]) != valuePositionMap.end())
            {
                return vector<int> {valuePositionMap.find(nums[i])->second, i};
            }
            valuePositionMap.insert(pair<int,int>(difference, i));
        }
        return vector<int> {-1, -1};
        
    }

};