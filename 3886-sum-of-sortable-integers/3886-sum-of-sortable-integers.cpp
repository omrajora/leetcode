
class Solution {
public:
    bool check(vector<int>& nums, int k) {
        int n = nums.size();
        int prevMax = 0;
for (int start = 0; start < n; start += k) {
            int end = start + k - 1;
 int mn = nums[start];
            int mx = nums[start];
            int desc = 0;
 for (int i = start; i <= end; i++) {
                mn = min(mn, nums[i]);
                mx = max(mx, nums[i]);
int next = (i == end) ? start : i + 1;
                if (nums[i] > nums[next]) {
                    desc++;
                }
            }
            if (desc > 1) {
                return false;
            }
            if (start > 0 && prevMax > mn) {
                return false;            }
    prevMax = mx;
        }
                return true;
    }
int sortableIntegers(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
 for (int k = 1; k <= n; k++) {
            if (n % k == 0 && check(nums, k)) {
                ans += k;
            }
        }
            return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna