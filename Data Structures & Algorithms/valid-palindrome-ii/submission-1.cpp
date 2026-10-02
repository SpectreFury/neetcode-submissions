class Solution {
public:
    bool validPalindrome(string s) {
        int left = 0;
        int right = s.size() - 1;

        while(left < right) {
            if(s[left] != s[right]) {
                for(int i = 0; i < 2; i++) {
                    int lcopy = (i == 0) ? left + 1: left;
                    int rcopy = (i == 1) ? right - 1: right;
                    bool failed = false;

                    while(lcopy < rcopy) {
                        if(s[lcopy] != s[rcopy]) {
                            failed = true;
                            break;
                        }
                        else{
                            lcopy++;
                            rcopy--;
                        }
                    }

                    if(!failed) {
                        return true;
                    }
                }

                return false;
            }

            else {
                left++;
                right--;
            }
        }

        return true;
    }
};