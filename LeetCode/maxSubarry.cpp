/*
    Given int array, find contiguous subarray w/ max sum
    Ex. nums = [-2,1,-3,4,-1,2,1,-5,4] -> 6, [4,-1,2,1]

    At each point, determine if it's better to add to curr sum or start over

    Time: O(n)
    Space: O(1)
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSub {nums[0]};
        int currSum {0};

        for (auto& num : nums){
            if (currSum < 0){
                currSum = 0;
            }
            currSum += num;
            maxSub = max(maxSub, currSum);
        }
        return maxSub;
    }
};
