class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;

        int result = 0;

        while(left < right) {
            int diff = right - left;

            if(heights[left] < heights[right]){
                int currentMax = heights[left] * diff; 
                left++;
                result = max(result, currentMax);
            }

            else if(heights[left] > heights[right]){
                int currentMax = heights[right] * diff; 
                right--;
                result = max(result, currentMax);
            }

            else {
                int currentMax = heights[right] * diff; 

                left++;
                right--;
                result = max(result, currentMax);
            }
        }

        return result;
    }
};
