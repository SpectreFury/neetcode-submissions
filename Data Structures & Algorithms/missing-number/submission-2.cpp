class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::vector<int> allNums;
        std::unordered_set<int> numSet;

        for(int num: nums) {
            numSet.insert(num);
        }

        for(int i = 0; i <= nums.size(); i++) {
            allNums.push_back(i);
        }

        for(int num: allNums) {
            if(numSet.find(num) == numSet.end()) {
                return num;
            }
        }

        return -1;
    }
};
