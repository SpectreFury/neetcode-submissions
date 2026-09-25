class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxWater = 0;

        while(left < right) {
            int currentWater = 0;
            int distance = right - left;

            if(heights[left] < heights[right]) {
                currentWater = heights[left] * distance;
                maxWater = max(maxWater, currentWater);

                left++;
            }

            else if(heights[left] > heights[right]) {
                currentWater = heights[right] * distance;
                maxWater = max(maxWater, currentWater);

                right--;
            }

            else {
                currentWater = heights[right] * distance;
                maxWater = max(maxWater, currentWater);

                left++;
                right--;
            }
        } 

        return maxWater;
    }
};
