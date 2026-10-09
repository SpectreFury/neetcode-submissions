class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> count(3);

        for(int num: nums) {
            count[num]++;
        }

        int index = 0;
        for(int i = 0; i < 3; i++) {
            int counter = 0;

            while(counter < count[i]) {
                nums[index] = i;
                index++;
                counter++;
            } 
        }
    }
};