class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for(string str: strs) {
            string sortedString = str;
            sort(sortedString.begin(), sortedString.end());

            hashmap[sortedString].push_back(str);
        }

        vector<vector<string>> result;
        for(auto pairs: hashmap) {
            result.push_back(pairs.second);
        }

        return result;
    }
};
