class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int left=0;
        int ans=0;
        for(int right=0;right<s.length();right++){
            if(mp.find(s[right])!=mp.end()){
                left = max(left, mp[s[right]] + 1);
            }
            mp[s[right]]=right;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna