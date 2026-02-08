class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        // Can't sort because solution has to be O(n)
        // Think of it on a number line
        
        unordered_set<int> allNums(nums.begin(), nums.end());


        int maxLength = 0;

        for(int num : allNums){
            // think of each number on a number line
            // we will just check the next number by adding 1 to see if it exists

            int current = num;

            // meaning if the number before it does not exist
            // It is the first number
            if(!allNums.count(current-1)){ 
                
                int count = 1;
                while(allNums.count(current+1)){
                    count++;
                    current++;
                }

                maxLength = max(maxLength, count);
            }

            
        }

        return maxLength;


    }
};