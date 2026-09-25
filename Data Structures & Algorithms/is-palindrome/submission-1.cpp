class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right) {
            while(left < right && !isalnum(s[left])) {
                left++;
            }
            while(right > left && !isalnum(s[right])) {
                right--;
            }

            transform(s.begin(), s.end(), s.begin(), ::tolower);

            if(s[left] != s[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
