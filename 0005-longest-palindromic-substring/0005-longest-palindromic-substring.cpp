class Solution {
public:
    string longestPalindrome(string s) {

        int longestLength = 0;
        string answer = "";

        for(int i = 0; i < s.size(); i++){


            int left = i;
            int right = i;

            while(left >= 0 && right <= s.size()-1 && s[left] == s[right]){

                if(right-left+1 > longestLength){
                    longestLength = right-left+1;
                    answer = s.substr(left, longestLength);
                }
                

                left--;
                right++;
            }


            
            // For even lengths we do the exact thing
            left = i;
            right = i+1;

            while(left >= 0 && right <= s.size()-1 && s[left] == s[right]){

                if(right-left+1 > longestLength){
                    longestLength = right-left+1;
                    answer = s.substr(left, longestLength);
                }
                

                left--;
                right++;
            }

        }

        return answer;
        
    }
};