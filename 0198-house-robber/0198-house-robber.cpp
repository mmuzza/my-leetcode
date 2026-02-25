class Solution {
public:
    int rob(vector<int>& nums) {


    /*

        1   2    3 4   5 6 7
        16  14  15 10 12 6 7

        2    1     1      2
        4    3     1      2


    */

    if(nums.size() == 1){
        return nums[0];
    }
    if(nums.size() == 2){
        return max(nums[0], nums[1]);
    }


    vector<int> dp(nums.size(), 0);

    dp[nums.size()-1] = nums[nums.size()-1];
    dp[nums.size()-2] = nums[nums.size()-2];
    dp[nums.size()-3] = nums[nums.size()-1] + nums[nums.size()-3];

    for(int i = nums.size()-4; i >= 0; i--){
        
        dp[i] = nums[i] + max(dp[i+2], dp[i+3]);
    }

    return max(dp[0],dp[1]);


    //-------------------------------------



    

    

    // 2    1     1      2
    //            i           p2     p1  both set to 0 initially

    // 2    1     1      2
    //      i            p2     p1 = 0 and p2 = 2

    // 2    1     1      2
    // i          p2     p1  p1 = 2 and p2 = 


    // 1       2       3       1
    //                 i                p2         p1  both set to 0 initially

    // 1       2       3       1
    //         i               p2         p1       p1 = 0, p2 = 1+0

    // 1       2       3       1
    // i              p2      p1       p1 = 1, p2 = 2


    


    }
};