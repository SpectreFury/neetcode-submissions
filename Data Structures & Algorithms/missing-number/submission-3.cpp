class Solution {
public:
    int missingNumber(vector<int>& nums) {
        std::unordered_set<int> hashset;

        for(int i = 0; i <= nums.size(); i++) {
            hashset.insert(i);
        }

        for(int num: nums) {
            hashset.erase(num);
        }

        std::vector<int> lastValue(hashset.begin(), hashset.end()); 
        return lastValue[0];
    }
};
