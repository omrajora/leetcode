class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
            int n=nums.size();
        vector<int>ans(n);
        int left = 0;
int right = n - 1;
int index = n - 1;
while(left<=right){
int l=nums[left]*nums[left];
int r=nums[right]*nums[right];
if(l>r){
    ans[index]=l;
    left++;
}
else{
    ans[index]=r;
    right--;
}
index--;
}
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna