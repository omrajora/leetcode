class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
             vector<string> ans;
        if (nums.empty()) return ans;
        int start=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]==nums[i]+1) continue;
        
        if (start == i) {
                ans.push_back(to_string(nums[start]));
            } 
            else {
                ans.push_back(to_string(nums[start]) + "->" + to_string(nums[i]));
            }
             start = i + 1;
        }
        // Last range
        if (start == nums.size() - 1) {
            ans.push_back(to_string(nums[start]));
        }
        else {
            ans.push_back(to_string(nums[start]) + "->" + to_string(nums.back()));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna