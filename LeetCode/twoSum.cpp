
/*
    Given int array & target, return indices of 2 nums that add to target
    Ex. nums = [2,7,11,15] & target = 9 -> [0,1], 2 + 7 = 9

    At each num, calculate complement, if exists in hash map then return

    Time: O(n)
    Space: O(n)
*
// For unordered_map operations is O(1)
//while O(log n) for map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashMap {};
        vector <int> result {};

        for (int i = 0; i < nums.size(); i++){
            int reminder = target - nums[i];
            if (hashMap.find(reminder) != hashMap.end()){
                result.push_back(hashMap[reminder]);
                result.push_back(i);
                break;
            }
            hashMap.insert({nums[i], i});
        }
        return result;
    }
};
