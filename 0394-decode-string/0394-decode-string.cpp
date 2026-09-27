class Solution {
public:
    string decodeString(string s) {
      stack<pair<int,string>>st;
      string curr="";
      int num=0;
      for(char ch : s){
        if(ch == '[') {
    st.push({num, curr});
    num=0;
    curr="";
}
else if(ch==']'){
    pair<int,string>p=st.top();
    st.pop();
    int repeat = p.first;       
    string prev = p.second;     
    string temp="";
    for(int i=0;i<repeat;i++){
        temp+=curr;
    }
    curr=prev+temp;
}
else if(isdigit(ch)) {
    num = num * 10 + (ch - '0');
}
else {
    curr += ch;
}
      }  
      return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna