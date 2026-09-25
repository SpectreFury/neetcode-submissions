class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> hashmap= {
            { ')', '('},
            { ']', '['},
            { '}', '{'}
        };

        stack<char> charStack;

        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                charStack.push(c);
            }

            else{
                if(charStack.empty() || charStack.top() != hashmap[c])  {
                    return false;
                }

                charStack.pop();
            }
        }

        return charStack.empty();
        
    }
};
