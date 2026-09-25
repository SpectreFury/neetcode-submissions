class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> hashset;

        for(int num: nums) {
            hashset.insert(num);
        }

        return hashset.size() != nums.size();
    }
};