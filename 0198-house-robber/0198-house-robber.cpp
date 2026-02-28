class Solution {
public:
    int rob(vector<int>& nums) {





    /*

        1   2    3 4   5 6 7
        16  14  15 10 12 6 7

        2    1     1      2

                              rob1=0  rob2=0
i=3                     rob1=2  rob2=0
i=2              rob1=2  rob2=2
i=1        rob1=2 rob2=2
i=0  rob1=4 rob2=2


    */

    int rob1 = 0;
    int rob2 = 0;

    for(int i = nums.size()-1; i >= 0; i--){

        int temp = max(nums[i] + rob2, rob1);
        rob2 = rob1;
        rob1 = temp;

    }

    return rob1;





    /* Solution 1:*/

    // if(nums.size() == 1){
    //     return nums[0];
    // }
    // if(nums.size() == 2){
    //     return max(nums[0], nums[1]);
    // }


    // vector<int> dp(nums.size(), 0);

    // dp[nums.size()-1] = nums[nums.size()-1];
    // dp[nums.size()-2] = nums[nums.size()-2];
    // dp[nums.size()-3] = nums[nums.size()-1] + nums[nums.size()-3];

    // for(int i = nums.size()-4; i >= 0; i--){
        
    //     dp[i] = nums[i] + max(dp[i+2], dp[i+3]);
    // }

    // return max(dp[0],dp[1]);


    //-------------------------------------

/*
    2    1     1      2
    
    prev1 = 0, prev2 = 0
    num = 2, temp = 0, prev1 = 0, prev2 = 0
    num = 1, temp = 0, prev1 = 1, prev2 = 0
*/


    // int prev1 = 0;
    // int prev2 = 0;

    // for(int num : nums){
    //     int temp = prev1;
    //     prev1 = max(prev2 + num, prev1);
    //     prev2 = temp;
    // }

    // return prev1;


    


    }
};