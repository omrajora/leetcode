class Solution {
public:
    int minMoves(vector<int>& nums) {
        long long moves =0;
         int mn = *min_element(nums.begin(), nums.end());
         for( int x : nums){
        moves += (x - mn);
         }
         return moves;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna