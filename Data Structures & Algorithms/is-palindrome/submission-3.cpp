class Solution {
public:
    bool isPalindrome(string s) {
        string newString = "";

        for(auto c: s) {
            if((bool)isalnum(c)) {
                newString += c;
            }
        }

        transform(newString.begin(),newString.end(), newString.begin(), ::tolower);

        string copy = newString;
        reverse(copy.begin(), copy.end());

        return newString == copy;
    }
};
