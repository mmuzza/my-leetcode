class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> allnums;
        vector<int> results;

        for(int i = 0; i < nums.size(); i++){

            if(allnums.count(target - nums[i])){
                results.push_back(i);
                results.push_back(allnums[target - nums[i]]);
                return results;
            }

            allnums[nums[i]] = i;
        }
        
        return {};
    }
};