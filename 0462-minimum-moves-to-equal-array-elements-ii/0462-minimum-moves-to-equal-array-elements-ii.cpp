class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(), nums.end());
        int mid = n / 2;
int median = nums[mid];
        int moves = 0;
for(int i = 0; i < n; i++) {
    moves += abs(nums[i] - median);
}
return moves;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna