class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxWater = 0;

        while(left < right) {
            int distance = right - left;

            if(heights[left] > heights[right]) {
                int curr = heights[right] * distance;
                maxWater = max(maxWater, curr);
                right--;
            }

            else if(heights[left] < heights[right]) {
                int curr = heights[left] * distance;
                maxWater = max(maxWater, curr);
                left++;
            }

            else {
                int curr = heights[left] * distance;
                maxWater = max(maxWater, curr);
                left++;
                right--;
            }
        }

        return maxWater;
    }
};
