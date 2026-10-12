class Solution {
public:
    string simplifyPath(string path) {
        stack<string>st;
        stringstream ss(path);
string part;

while (getline(ss, part, '/')) {
if(part==".."){
    if(!st.empty()){
        st.pop();
    }
}
else if (part != "." && part != "") {
    st.push(part);
}
}
 string ans = "";
 while(!st.empty()){
    ans="/"+st.top()+ans;
    st.pop();
 }
   return ans.empty() ? "/" : ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna