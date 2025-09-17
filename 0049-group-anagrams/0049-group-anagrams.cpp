class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> result;
        unordered_map<string, vector<string>> wordsMap;

        for(int i = 0; i < strs.size(); i++){
            string unsortedWord = strs[i]; 
            sort(strs[i].begin(), strs[i].end());
            wordsMap[strs[i]].push_back(unsortedWord);
        }

        for(const auto& pair : wordsMap){
            result.push_back(pair.second);
        }

        return result;


        
    }
};