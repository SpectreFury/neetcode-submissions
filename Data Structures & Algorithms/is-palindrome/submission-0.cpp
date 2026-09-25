class Solution {
public:
    bool isPalindrome(string s) {
        string newString;

        for(int i = 0; i < s.length(); i++) {
            if((bool)isalnum(s[i])) {
                newString += s[i];
            }
        }

        // Lowercase
        std::transform(newString.begin(), newString.end(), newString.begin(), ::tolower);

        string copy = newString;

        // Reverse
        reverse(copy.begin(), copy.end());

        return newString == copy;
    }
};
