class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        

        int left = 0;
        unordered_set<char> mySet;

        int count = 0;

        for(int i = 0; i < s.size(); i++){

            while(mySet.count(s[i])){
               mySet.erase(s[left]);
               left++;
            }

            mySet.insert(s[i]);
            
            count = max(count, i-left+1);

        }

        return count;
        
    }
};