class Solution {
public:
    int climbStairs(int n) {

        /*
                        ___
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

        if(n == 1){
            return 1;
        }

        int pointer1, pointer2;

        for(int i = n; i >= 1; i--){

            if(i == n){
                pointer1 = 1;
                cout << "p1: " << pointer1 << " -- p2: ";
                continue;
            }
            if(i == n-1){
                pointer2 = 1;
                cout << pointer2 << endl;;
                continue;
            }

            int temp = pointer1;
            pointer1 = pointer2;
            pointer2 = pointer1 + temp;

            cout << "p1: " << pointer1 << " -- p2: " << pointer2 << endl;

        }

        return pointer1 + pointer2;

        
    }
};