class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> unique;
        int longest = 0;

        for(int num: nums) {
            unique.insert(num);
        }

        for(int num: nums) {
            if(unique.find(num - 1) == unique.end()){
                // Start of the sequence
                int length = 0;
                while (unique.find(num + length) != unique.end()){
                    length += 1;
                }
                longest = max(length, longest);

            }
        }
        
        return longest;
    }
};
