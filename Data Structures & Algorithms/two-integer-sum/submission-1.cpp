class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Optimal 

       std::unordered_map<int, int> hashmap; 

       for(int i = 0; i < nums.size(); i++) {
        int diff = target - nums[i];

        auto iterator = hashmap.find(diff);
        if(iterator != hashmap.end()) {
            return {hashmap[diff], i};
        }

        hashmap[nums[i]] = i;
       }

       return {-1, -1};
    }
};
