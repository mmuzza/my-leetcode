class Solution {
public:
    bool isPalindrome(string s) {

        string cleanS = "";

        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){ //
                cleanS += tolower(s[i]);
            }
        }

        int left = 0;
        int right = cleanS.size()-1;

        cout << cleanS << endl;

        while(left < right){
            // cout << cleanS[left] << "---" << cleanS[right] << endl;

            if(cleanS[left] != cleanS[right]){
                return false;
            }
            
            left++;
            right--;
        }

        return true;

    }
};