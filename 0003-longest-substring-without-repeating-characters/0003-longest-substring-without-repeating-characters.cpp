class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size()==0){
            return 0;
        }

        if(s.size()==1){
            return 1;
        }

        unordered_set<char> mySet;
        int length = 0;

        // we can use sliding window technique
        int left = 0;

        for(int i = 0; i < s.size(); i++){ // i is right

            

            while(mySet.count(s[i]) && left < i){
                mySet.erase(s[left]);
                left++;
            }

            mySet.insert(s[i]);
            length = max(length, i-left+1);

            

        }
        return length;
        
    }
};