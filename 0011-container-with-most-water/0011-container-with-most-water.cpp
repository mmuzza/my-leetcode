class Solution {
public:
    int maxArea(vector<int>& height) {


        int left = 0;
        int right = height.size()-1;

        int answer = 0;

        while(left < right){
            
            int minimum = min(height[left], height[right]);
            int maximumArea = minimum * (right-left);

            answer = max(answer, maximumArea);

            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }


        return answer;
        
    }
};