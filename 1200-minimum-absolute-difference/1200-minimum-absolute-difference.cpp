class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(), arr.end());
        int mini = INT_MAX;
        for(int i = 1; i < n; i++) {
    mini = min(mini, arr[i] - arr[i-1]);
        }
    vector<vector<int>> ans;
for(int i = 1; i < n; i++) {
    if(arr[i] - arr[i-1] == mini) {
        ans.push_back({arr[i-1], arr[i]});
    }
}
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna