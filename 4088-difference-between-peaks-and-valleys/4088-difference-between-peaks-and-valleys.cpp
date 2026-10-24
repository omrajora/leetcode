class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int n = nums.size();
        int sumPeaks = 0;
        int sumValleys = 0;

        for (int i = 1; i < n - 1; i++) {
            if (nums[i] > nums[i - 1] && nums[i] > nums[i + 1]) {
                sumPeaks += nums[i];
            } else if (nums[i] < nums[i - 1] && nums[i] < nums[i + 1]) {
                sumValleys += nums[i];
            }
        }

        return sumPeaks - sumValleys;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna