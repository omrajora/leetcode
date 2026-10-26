class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for(int i=0;i<nums1.size();i++){
            int ans =-1;
            int j=0;
        for(;j<nums2.size();j++){
            if(nums1[i]==nums2[j]) break;
        }

for (int k = j + 1; k < nums2.size(); k++) {
    if (nums2[k] > nums1[i]) {
        ans = nums2[k];
        break;
    }
}
res.push_back(ans);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna