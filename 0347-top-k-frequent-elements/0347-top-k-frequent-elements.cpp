class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        if(k > nums.size()){
            return {};
        }
        
        unordered_map<int, int> freqMap;
        priority_queue<pair<int, int>> q;
        vector<int> result;

        for(int i = 0; i < nums.size(); i++){
            freqMap[nums[i]]++;
        }

        for(const auto& pair : freqMap){
            q.push({pair.second, pair.first});
        }

        for(int i = 0; i < k; i++){
            result.push_back(q.top().second);
            q.pop();
        }

        return result;

        
    }
};