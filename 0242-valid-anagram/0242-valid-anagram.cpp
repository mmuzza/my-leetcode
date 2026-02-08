class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // s = "anagram"
        // t = "nagaram"

        ////// Solution 1: sorting

        // if(s.size() != t.size()){
        //     return false;
        // }

        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());

        // return s == t;


        if(s.size() != t.size()){
            return false;
        }

        unordered_map<char, int> sMap;
        unordered_map<char, int> tMap;

        for(int i = 0; i < s.size(); i++){
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        return sMap == tMap;


    }
};