class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> result;

        // strs = ["eat","tea","tan","ate","nat","bat"]
        // Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

        // We can have a map -> sorted(key) : vector<val>

        unordered_map<string, vector<string>> groups;

        for(int i = 0; i < strs.size(); i++){

            string word = strs[i];
            sort(word.begin(), word.end());

            groups[word].push_back(strs[i]);
        }

        for(const auto & pair : groups){
            result.push_back(pair.second);
        }

        return result;
        
    }
};