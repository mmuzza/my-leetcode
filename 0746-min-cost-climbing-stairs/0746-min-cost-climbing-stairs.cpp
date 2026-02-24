class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {


        // cost = [10,15,20]

        /*
        
        [10,15,20]
         0  1  2

         new array of size 3 and we store it backards [_ _ _]
         1. we are at index 2 which is 20:
            -  i can only take one step to reach top so $20 i have to pay: [_ _ 20]
            -  i cant take two steps
         2. we move back to index 1:
            -  i can take one step which will cost me $15 and to get to top will cost me $20 (next index)
            -  i can take two steps and i can reach the top and that will cost me $15 only
            -  so i take the minimum(15+20, 15)
         3. we move back to index 0
            -  i can take one step that will cost me $10 + $15 to reach the top
            -  i can take two steps that will cost me $10 + $20 to reach the top
            -  I take the minimum(10+15, 10+20)
        
        so my final array will look like: [25, 15 ,20]
        now we can take one step or two in begging so we return the minimum of index 0 and index 1

        */

        vector<int> dp(cost.size(), 0);

        dp[cost.size()-1] = cost[cost.size()-1];
        dp[cost.size()-2] = cost[cost.size()-2];

        for(int i = cost.size()-3; i >= 0; i--){


            dp[i] = min(cost[i] + dp[i+1], cost[i] + dp[i+2]);
            
        }

        return min(dp[0], dp[1]);
        
    }
};