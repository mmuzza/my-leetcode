class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string, vector<string>> myMap;
        vector<vector<string>> results;

        for(int i = 0; i < strs.size(); i++){
            string word = strs[i];
            sort(word.begin(), word.end());
            myMap[word].push_back(strs[i]);
        }

        for(const auto & pair : myMap){
            results.push_back(pair.second);
        }

        return results;
    }
};