class Solution {
public:
    int minRange(int a, int b, int c) {
vector<int>ans={a,b,c};
    sort(ans.begin(),ans.end());
        int mini=ans[0];
        int mid=ans[1];
        int maxi=ans[2];
        return min(maxi-mini,mid);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna