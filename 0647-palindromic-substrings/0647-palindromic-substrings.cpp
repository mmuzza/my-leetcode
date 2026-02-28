class Solution {
public:
    int countSubstrings(string s) {
        
        string answer = "";
        int count = 0;

        for(int i = 0; i < s.size(); i++){

            int left = i;
            int right = i;

            while((left >= 0) && (right <= s.size()-1) && (s[left] == s[right])){ 

                count++;
                left--;
                right++;
            }


            left = i;
            right = i+1;

            while((left >= 0) && (right <= s.size()-1) && (s[left] == s[right])){ 

                count++;
                left--;
                right++;
            }
        }

        return count;
    }
};