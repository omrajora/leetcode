class Solution {
public:
    bool checkValidString(string s) {
        stack<int>open,star;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                open.push(i);
            }
            else if(s[i]=='*'){
                star.push(i);
            }
            else{
                if(!open.empty()){
                    open.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else{
                    return false;
                }
            }
        }
          while (!open.empty() && !star.empty()) {
            if (open.top() > star.top()) {
                return false;
            }

            open.pop();
            star.pop();
        }
        return open.empty();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna