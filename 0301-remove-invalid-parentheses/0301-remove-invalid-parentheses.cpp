class Solution {
public:
    vector<string> removeInvalidParentheses(string s) {

        unordered_set<string> curr;
        curr.insert(s);

        while(true) {

            vector<string> ans;

            // Check current level
            for(string str : curr) {

                int bal = 0;
                bool valid = true;

                for(char ch : str) {

                    if(ch == '(') {
                        bal++;
                    }
                    else if(ch == ')') {
                        bal--;

                        if(bal < 0) {
                            valid = false;
                            break;
                        }
                    }
                }

                if(valid && bal == 0) {
                    ans.push_back(str);
                }
            }

            // If valid strings found,
            // this is the minimum number of removals.
            if(!ans.empty()) {
                return ans;
            }

            // Generate next level by removing ONE parenthesis
            unordered_set<string> next;

            for(string str : curr) {

                for(int i = 0; i < str.length(); i++) {

                    // Only remove parentheses
                    if(str[i] != '(' && str[i] != ')')
                        continue;

                    string nextStr =
                        str.substr(0, i) +
                        str.substr(i + 1);

                    next.insert(nextStr);
                }
            }

            curr = next;
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna