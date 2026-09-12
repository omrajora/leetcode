class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
     if(n==0) return 1;
        int ans=10;
        int current=9;
        int avl=9;
        for(int i=2;i<=n && avl>0;i++){
            current=current*avl;
            ans=ans+current;
            avl--;

        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna