class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string newString = "";

        int i = 0;
        int j = 0;

        while(i < word1.size() && j < word2.size()) {
            newString += word1[i++];
            newString += word2[j++];
        }

        while(i < word1.size()) {
            newString += word1[i++];
        }

        while(j < word2.size()) {
            newString += word2[j++];
        }

        return newString;
    }
};