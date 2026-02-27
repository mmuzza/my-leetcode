class Solution {
public:
    string longestPalindrome(string s) {

        string answer = "";

        for(int i = 0; i < s.size(); i++){

            int left = i;
            int right = i;

            while((left >= 0) && (right <= s.size()-1) && (s[left] == s[right])){ 

                if(right-left+1 > answer.size()){
                    answer = s.substr(left, right-left+1);
                }

                left--;
                right++;
            }


            left = i;
            right = i+1;

            while((left >= 0) && (right <= s.size()-1) && (s[left] == s[right])){ 

                if(right-left+1 > answer.size()){
                    answer = s.substr(left, right-left+1);
                }

                left--;
                right++;
            }
        }

        return answer;
        
    }
};