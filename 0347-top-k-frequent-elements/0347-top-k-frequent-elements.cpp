class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // create a frequency map
        // use priority queue to get k amount

        unordered_map<int, int> myMap;

        for(int i = 0; i < nums.size(); i++){
            myMap[nums[i]]++;
        }

        priority_queue<pair<int,int>> q;

        for(const auto & p : myMap){
            q.push({p.second,p.first});
        }

        
        vector<int> results;
        for(int i = 0; i < k; i++){
            results.push_back(q.top().second);
            q.pop();
        }

        return results;
        
    }
};