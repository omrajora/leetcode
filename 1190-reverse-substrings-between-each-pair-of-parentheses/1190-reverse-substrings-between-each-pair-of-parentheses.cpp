class Solution {
public:
    string reverseParentheses(string s) {
        stack<string> st;
     string curr = "";
     for(char ch : s){
        if(ch=='('){
           st.push(curr); 
           curr="";
        }
else if(ch==')'){
    string prev=st.top();
    st.pop();
    reverse(curr.begin(),curr.end());
    curr=prev+curr;
}
else curr+=ch;
     }
     return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna