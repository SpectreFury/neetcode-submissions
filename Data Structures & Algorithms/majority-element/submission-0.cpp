class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        int limit = nums.size() / 2;

        for(int num: nums) {
            freqMap[num]++;
        }

        for(auto pairs: freqMap) {
            if(pairs.second > limit) {
                return pairs.first;
            }
        }

        return -1;
    }
};