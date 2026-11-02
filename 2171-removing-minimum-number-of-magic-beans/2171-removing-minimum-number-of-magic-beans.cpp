class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        int n = beans.size();
        sort(beans.begin(), beans.end());
        long long total = 0;
      long long ans = LLONG_MAX;
for(int i = 0; i < beans.size(); i++) {
    total += beans[i];
}
for(int i = 0; i < n; i++) {
    ans=min(ans,total - 1LL * beans[i] * (n - i));
}
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna