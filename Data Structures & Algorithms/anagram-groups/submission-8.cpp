class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;
        
        for(auto str: strs) {
            vector<int> count(26);

            for(char c: str) {
                count[c - 'a']++;
            }

            string key = to_string(count[0]);
            for(int i = 1; i < count.size(); i++) {
                key += "," + to_string(count[i]);
            }

            hashmap[key].push_back(str);
        }

        vector<vector<string>> res;
        for(auto pairs: hashmap) {
            res.push_back(pairs.second);
        }

        return res;
    }
};
