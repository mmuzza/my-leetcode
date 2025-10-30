class Solution {
public:
    bool isPalindrome(string s) {

        string cleanS = "";

        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){ // checks if its a digit or letter. can also use isdigit || isalpha
                cleanS += s[i];
            }
        }

        cout << "word: " + cleanS << endl;

        int left = 0;
        int right = cleanS.size()-1;

        bool palindrome = true;

        while(left < right){
            if(tolower(cleanS[left]) != tolower(cleanS[right])){
                palindrome = false;
                break;
            }
            left++;
            right--;
        }
        
        return palindrome;
    }
};