class Solution {
   public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                for (int i = 0; i < 2; i++) {
                    int l_copy = (i == 0 ? left + 1: left);
                    int r_copy = (i == 1 ? right - 1: right);
                    int mismatch = false;

                    while (l_copy < r_copy) {
                        if (s[l_copy] != s[r_copy]) {
                            mismatch = true;
                            break;
                        }

                        l_copy++;
                        r_copy--;
                    }

                    if(!mismatch) {
                        return true;
                    }
                }

                return false;

            } else {
                left++;
                right--;
            }
        }

        return true;
    }
};