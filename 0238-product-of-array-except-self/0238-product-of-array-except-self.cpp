class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // nums =  1,  2,  3,  4
        // left =  1,  2,  6,  24
        // right = 24, 24, 12,  4

        vector<int> result;
        vector<int> leftSum;
        vector<int> rightSum;

        int product = 1;
        for(int i = 0; i < nums.size(); i++){
            product = product * nums[i];
            leftSum.push_back(product);

            rightSum.push_back(0);
        }

        product = 1;
        for(int i = nums.size()-1; i >= 0; i--){
            product = product * nums[i];
            rightSum[i] = product;
        }

        for(int i = 0; i < nums.size(); i++){

            if(i == 0){
                result.push_back(rightSum[i+1]);
                continue;
            }
            if(i == nums.size()-1){
                result.push_back(leftSum[i-1]);
                continue;
            }

            result.push_back(leftSum[i-1] * rightSum[i+1]);
        }

        return result;
    }
};