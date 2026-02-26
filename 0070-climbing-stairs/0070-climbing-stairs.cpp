class Solution {
public:
    int climbStairs(int n) {

        if(n == 1){
            return 1;
        }

        vector<int> dp(n, 0);


        dp[n-1] = 1;
        dp[n-2] = 1;

        for(int i = n-3; i >= 0; i--){
            dp[i] = dp[i+1] + dp[i+2];
        }

        return dp[0] + dp[1];



        /*

        n = 3

        1 2 3 4
        0 1 2 3

        dp = [ __ __ __ ]
        dp = [ __ __  1 ]
         dp = [ __ 2 1 ]


        
        
        */

        /*
                    ___
                ___
            ___
        
        */

        /* always make a deicision tree,
           in this case we make 2 decisions so we can use recursion
                       
                Lets say n = 3 so we start with step 0 and
                we can make 2 deicison, either take 1 step or 2 steps     
                                Step 0
                                /    \
                               1      2
                              / \    / \
                             2   3  3   4
                            / \
                           3   4
                In total we can get to 3rd step in 3 ways according to decision tree
        */

        /*
            Another way to solve DP is working backwards
        */

        // 2 1 1

        // if(n == 1){
        //     return 1;
        // }

        // int pointer1, pointer2;

        // for(int i = n; i >= 1; i--){

        //     if(i == n){
        //         pointer1 = 1;
        //         continue;
        //     }
        //     if(i == n-1){
        //         pointer2 = 1;
        //         continue;
        //     }

        //     int temp = pointer1;
        //     pointer1 = pointer2;
        //     pointer2 = pointer1 + temp;


        // }

        // return pointer1 + pointer2;



        /*

        n = 5
        [_ _ _ _ _]
         0 1 2 3 4

        we will go backwars so initialize an empty array [_ _ _ _ _]
        1. from index 4:
            - we can only take 1 step to get to the top
            - [_ _ _ _ 1]
        2. From index 3 we can take:
            - 1 step that will be 1 way + whatever we have at index 4 ways
            - 2 step will take us to the top so that another way
            - so we store both of those whcih will be 3
            - [_ _ _ 3 1]
        3. from index 2 we can take:
            - 1 step that will be 1 + 3 (index 3)
            - 2 step that will be 1 way + 1 way (index 4)
            - [_ _ 6 3 1]
        4. from index 1 we can take
            - 1 step that will be 1 + 6 (index 2)
            - 2 step tha will be 1 + 
              

        */




        
    }
};