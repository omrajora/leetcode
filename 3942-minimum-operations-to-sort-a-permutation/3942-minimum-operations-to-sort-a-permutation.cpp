
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        int zero = find(nums.begin(), nums.end(), 0)
                   - nums.begin();

        rotate(nums.begin(), nums.begin() + zero,
               nums.end());

        if (is_sorted(nums.begin(), nums.end())) {
            return min(zero, n - zero + 2);
        }

        rotate(nums.begin(), nums.begin() + 1,
               nums.end());

        reverse(nums.begin(), nums.end());

        if (is_sorted(nums.begin(), nums.end())) {
            return min(zero + 2, n - zero);
        }

        return -1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna