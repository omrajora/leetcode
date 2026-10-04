class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
      vector<string>ans;
        for(int i=0;i<s.length();i+=k){
string group=s.substr(i,k);
if (group.length() < k) {
int missing = k - group.length();
group += string(missing, fill);
}
ans.push_back(group);

        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna