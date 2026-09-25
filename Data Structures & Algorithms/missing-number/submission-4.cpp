class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int current = 0;
        int total = 0;

        for(int i = 0; i <= nums.size(); i++) {
            total += i;
        }

        for(int num: nums) {
            current += num;
        }

        return total - current;
    }
};
