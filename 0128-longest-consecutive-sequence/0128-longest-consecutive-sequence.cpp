class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0){
            return 0;
        }

       // We can make priority queue that stores the number from greatest to lowest
       // We can iterare over it and see how many consecutive numbers are there

       priority_queue<int> q;
       unordered_set<int> mySet;
       for(int i = 0; i < nums.size(); i++){
            mySet.insert(nums[i]);
            // q.push(nums[i]);
       }

       for(const auto & s : mySet){
            q.push(s);
       }

       int longest = 0;
       int current = 0;

       while(!q.empty()){
            int temp = q.top();
            q.pop();

            if(!q.empty() && (temp - 1 == q.top())){
                current ++;
            }else{
                current = 0;
            }

            longest = max(longest, current);
       }

       return longest + 1;
    }
};