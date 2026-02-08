class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // Store the count inside of a map
        // so if  nums = [1,1,1,2,2,3] we will have:
            // 1 : 3
            // 2 : 2
            // 3 : 1

        unordered_map<int, int> numsFreq;
        for(int i = 0; i < nums.size(); i++){
            numsFreq[nums[i]]++;
        }

        // we can use a queue with pairs to store highest count
        priority_queue<pair<int, int>> q;
        for(const auto & pair : numsFreq){
            q.push({pair.second, pair.first});
        }

        vector<int> results;
        for(int i = 0; i < k; i++){
            results.push_back(q.top().second);
            q.pop();
        }

        return results;


    }
};