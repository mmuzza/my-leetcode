class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Input: nums = [1,2,3,4]
        // Output: [24,12,8,6]

        // nums: 1 2 3 4
        // left = 1 1 2 6

        // nums: 1 2 3 4
        // right = 24 12 4 1

        // left = 1 1 2 6
        // right = 24 12 4 1

        // output: left * right = 24 12 8 6

        vector<int> left;
        vector<int> right;
        vector<int> output;
        
        right.push_back(1);
        left.push_back(1);
        int product = 1;

        for(int i = 1; i < nums.size(); i++){
            product = nums[i-1] * product;
            left.push_back(product);

            right.push_back(1);
        }
        


        right[nums.size()-1] = 1;
        product = 1;

        for(int i = nums.size()-2; i >= 0; i--){
            product = nums[i+1] * product;
            right[i] = product;
        }

        for(int i = 0; i < nums.size(); i++){
            output.push_back(left[i] * right[i]);
        }

        return output;

    }
};