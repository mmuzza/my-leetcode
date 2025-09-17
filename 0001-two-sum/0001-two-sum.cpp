class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> result;

        unordered_map<int, int> difference;

        for(int i = 0; i < nums.size(); i++){
            if(difference.count(target-nums[i])){
                result.push_back(difference[target-nums[i]]);
                result.push_back(i);
                return result;
            }
            difference[nums[i]] = i;
        }

        return result;
    }
};