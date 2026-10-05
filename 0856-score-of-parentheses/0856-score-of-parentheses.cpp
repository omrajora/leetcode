class Solution {
public:
    int scoreOfParentheses(string s) {
        // Current Complexity:
        // Time: O(N) - single pass through the string.
        // Space: O(N) - storing characters in a stack.
        // Note: The current implementation is incomplete and only pushes characters without logic.
        
        // Strategy 1 (Stack-based):
        // Instead of pushing characters, try pushing the "current score" at that nesting level.
        // When you see '(', push a 0 onto the stack (representing a new level).
        // When you see ')', pop the top value. 
        // If the popped value was 0, it means we found "()", so add 1 to the previous level.
        // If it was > 0, it means we found "(A)", so add 2 * popped_value to the previous level.

       
        int score=0;
        stack<int>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(score);
                score=0;
            }
            else {
               int prev = st.top();
              st.pop();
            
                if(score==0){
                    score=1;
                }
                else{
                    score=2*score;
                }
                    score=prev+score;
                

            }
        }
        return score;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna