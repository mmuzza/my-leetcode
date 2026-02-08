class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // 12341567
        // 1 is repeating

        // Use a set
        unordered_set<int> duplicate;
        for(int i = 0; i < nums.size(); i++){

            if(duplicate.count(nums[i])){
                return true;
            }
            duplicate.insert(nums[i]);
        }

        return false;
    }
};