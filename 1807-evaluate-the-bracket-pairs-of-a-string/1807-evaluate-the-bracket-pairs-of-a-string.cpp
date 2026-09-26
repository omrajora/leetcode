class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> mp;

        for (auto x : knowledge) {
            mp[x[0]] = x[1];
        }

        string ans = "";
        int i = 0;

        while (i < s.size()) {

            if (s[i] == '(') {

                string key = "";
                i++;

                while (s[i] != ')') {
                    key += s[i];
                    i++;
                }

                i++;

                if (mp.find(key) != mp.end())
                    ans += mp[key];
                else
                    ans += "?";
            }

            else {
                ans += s[i];
                i++;
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna