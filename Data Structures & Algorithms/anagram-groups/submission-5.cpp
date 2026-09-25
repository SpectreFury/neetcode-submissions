class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for(auto str: strs) {
            string copy = str;

            sort(copy.begin(), copy.end());
            hashmap[copy].push_back(str);
        }

        vector<vector<string>> result;

        for(auto pairs: hashmap) {
            result.push_back(pairs.second);
        }

        return result;
    }
};
