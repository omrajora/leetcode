class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int rightsum=0;
        int leftsum=0;
        int totalsum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            totalsum+=nums[i];
        }
        for(int i=0;i<n;i++){
        rightsum=totalsum-leftsum-nums[i];
        if(leftsum==rightsum){
            return i;
        }
        leftsum=leftsum+nums[i];
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna