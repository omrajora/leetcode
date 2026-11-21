
class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size();
        vector<string> ans;

        int alice = 0, bob = 0;

        for(int i = 0; i < n; i++) {

            if(i+1 < n && rain[i] == 1 && rain[i+1] == 1) {
                if(alice <= bob) {
                    ans.push_back("Alice");
                    alice++;
                }
                else {
                    ans.push_back("Bob");
                    bob++;
                }
            }
            else if(rain[i] == 1) {
                ans.push_back("Bob");
                bob++;
            }
            else {
                ans.push_back("None");
            }
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna