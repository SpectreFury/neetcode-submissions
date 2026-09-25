class Solution {
public:
    int maxArea(vector<int>& heights) {
       int left = 0; 
       int right = heights.size() - 1;

       int result = 0;

       while(left < right) {
        int diff = right - left;

        if(heights[left] > heights[right]) {
            int currMax = heights[right] * diff;

            result = max(result, currMax);

            right--;
        }
        else if(heights[left] < heights[right]) {
            int currMax = heights[left] * diff;
            result = max(result, currMax);

            left++;
        }
        else{
            int currMax = heights[left] * diff;
            result = max(result, currMax);
            
            left++;
            right--;
        }

       }

       return result;
    }
};
