class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;
        for(int i = 0; i < nums.size(); i++) {
            hashmap[nums[i]]++;
        }

        vector<vector<int>> freq(nums.size() + 1);

        for(const auto& entry: hashmap) {
            freq[entry.second].push_back(entry.first);
        }

        vector<int> result;

        for(int i = freq.size() - 1; i > 0; i--) {
            for(int n: freq[i]) {
                result.push_back(n);
                if(result.size() == k) {
                    return result;
                }
            }
        }

        return result;
    }
};
