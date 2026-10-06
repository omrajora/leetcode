class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int>st;
        int min=0;
        for(char ch : s){
            if(ch=='('){
                st.push(ch);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
                else min++;
            }
        }
        return min+ st.size();
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna