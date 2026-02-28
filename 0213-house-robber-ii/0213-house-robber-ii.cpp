class Solution {
public:
    int rob(vector<int>& nums) {
        

        if(nums.size() == 1){
            return nums[0];
        }
        

        /*

                2
              /   \
             3 --  1

        */

        vector<int> skipFirst(nums.begin()+1, nums.end());
        vector<int> skipLast(nums.begin(), nums.end()-1);

        return max(helper(skipFirst), helper(skipLast));

        
    }


    int helper(vector<int> nums){

        int rob1 = 0;
        int rob2 = 0;

        for(int i = nums.size()-1; i >= 0; i--){

            int temp = max(nums[i] + rob2, rob1);
            rob2 = rob1;
            rob1 = temp;

        }

        return rob1;
    }
};