class Solution {
public:
    bool isValid(string s) {
        if(s.length()%2!=0){
     return false;
   }
    stack<char> st;
    for(int i=0;i<s.length();i++){
      if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
      else{
        if(st.empty()) return false;
         else if((s[i]==')' && st.top()=='(') || (s[i]=='}' && st.top()=='{') || (s[i]==']' && st.top()=='[')) st.pop();
         else return false;
      }
    }
    if(st.size()==0) return true;
    else return false; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna