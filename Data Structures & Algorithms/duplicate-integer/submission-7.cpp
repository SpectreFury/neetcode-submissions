class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> hashset;

        for(int num: nums) {
            hashset.insert(num);
        }

        return nums.size() != hashset.size();
    }
};