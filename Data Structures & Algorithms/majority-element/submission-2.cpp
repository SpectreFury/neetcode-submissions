class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;

        for(int num: nums) {
            count[num]++;
        }

        for(int num: nums) {
            if(count[num] > nums.size() / 2) {
                return num;
            } 
        }

        return -1;
    }
};