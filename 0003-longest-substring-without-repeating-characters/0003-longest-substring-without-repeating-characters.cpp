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

            if(mySet.count(s[i])){
                length = max(length, i - left);

                while((s[left] != s[i]) && (left < i)){
                    left++;
                }
                left++;
            }else{
                mySet.insert(s[i]);
            }

            // while(mySet.count(s[i])){
            //     left++;
            //     length = 0;
            // }

            

            // t a b c a
            // left = t

        }
        return length;
        
    }
};