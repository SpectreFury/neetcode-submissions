class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        std::unordered_map<char, int> countS, countT;

        for(int i = 0; i < s.size(); i++) {
            countS.insert({s[i], countS[s[i]]++});
            countT.insert({t[i], countT[t[i]]++});
        }

        return countS == countT;
    }
};
