class Solution {
public:
    int minMoves(vector<int>& nums) {
 int n = nums.size();
     int maxi = *max_element(nums.begin(), nums.end());
long long ans=0;
for(int i=0;i<n;i++){
    ans+=min(maxi,maxi-nums[i]);
}
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna