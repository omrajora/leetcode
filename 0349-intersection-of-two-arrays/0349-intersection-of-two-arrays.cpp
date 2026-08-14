class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> s;
       unordered_set<int> ans;
       for(int num : nums1){
        s.insert(num);
       } 
       for(int i=0;i<nums2.size();i++){
if(s.count(nums2[i])) {
    ans.insert(nums2[i]);
}
       }
vector<int> result(ans.begin(), ans.end());
return result;
       
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna