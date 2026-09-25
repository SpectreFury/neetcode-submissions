class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string, vector<string>> hashmap;

        for(string str: strs) {
            string copy = str;
            sort(copy.begin(), copy.end());

            hashmap[copy].push_back(str);
        }

        for(auto pairs: hashmap) {
            result.push_back(pairs.second);
        }

        return result;
    }
};
