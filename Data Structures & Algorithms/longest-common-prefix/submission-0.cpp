class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string lcp = strs[0];

        for(int i = 1; i < strs.size(); i++) {
            int j = 0;

            while(j < min(lcp.size(), strs[i].size())) {
                if(lcp[j] != strs[i][j]) {
                    break;
                }

                j++;
            }

            lcp = lcp.substr(0, j);
        }

        return lcp;
    }
};