class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashmap;

        for(string str: strs) {
            string copy = str;
            sort(copy.begin(), copy.end());

            hashmap[copy].push_back(str);
        }

        vector<vector<string>> res;
        for(pair<string, vector<string>> bucket: hashmap) {
            res.push_back(bucket.second);
        }

        return res;
    }
};
