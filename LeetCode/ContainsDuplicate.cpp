//Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s {};

        for (size_t i = 0; i < nums.size(); i++){
            if (s.find(nums[i]) != s.end()){
                return true;
            } 
            s.insert(nums[i]);
        }
        return false;
    }
};
