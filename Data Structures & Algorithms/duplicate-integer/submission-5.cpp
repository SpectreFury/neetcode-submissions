class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
       unordered_set<int> hashset; 

       for(auto num: nums) {
        hashset.insert(num);
       }

       return hashset.size() != nums.size();
    }
};