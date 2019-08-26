class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>>  toRet; //two dimensions array
    if (nums.size() < 4)
    {
        return toRet;
    }
    sort(nums.begin(),nums.end());

    for(int i = 0; i < nums.size() - 3; i++)
    {
        int a = nums[i];
        if (i>0 && a==nums[i-1])
        {
            continue;
        }
        if( nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target )
        {
            break;
        }
        if( nums[i] + nums[nums.size()-3] + nums[nums.size()-2] + nums[nums.size()-1 ] < target )
        {
            continue;
        }

        for(int j = i + 1; j < nums.size() - 2; j++)
        {
            int b = nums[j];
            if (j>i+1 && b==nums[j-1] )
            {
                continue;
            }

            if( nums[i] + nums[j] + nums[j+1] + nums[j+2] > target )
            {
                break;
            }

            if( nums[i] + nums[j] + nums[nums.size()-2] + nums[nums.size()-1] < target )
            {
                continue;
            }

            int lindex = j + 1;
            int rindex = nums.size()-1;

            while(lindex < rindex)
            {
                int c = nums[lindex];
                int d = nums[rindex];
                int sum = a + b + c + d;

                if(sum==target)
                {
                    while(lindex < rindex && c==nums[lindex])
                    {
                        lindex++;
                    }
                    while(lindex < rindex && d==nums[rindex])
                    {
                        rindex--;
                    }
                    toRet.push_back({a,b,c,d});
                }
                else if (sum < target)
                {
                    lindex++;
                }
                else if (sum > target)
                {
                    rindex--;
                }
            }//end of whileloop


        }  // end of j loop
    }// end of i loop


    return toRet;
    }
};