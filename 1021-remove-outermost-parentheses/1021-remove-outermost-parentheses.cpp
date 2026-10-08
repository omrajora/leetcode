class Solution {
public:
    string removeOuterParentheses(string s) {
        int store=0;
        string ans;
    for(char ch : s){
        if(ch=='('){
            if(store>0){
                ans+=ch;
            }
            store++;
            
        }
        else if( ch==')'){
            store--;
           if(store>0){
            ans+=ch;
           }
        }
    } 
    return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna