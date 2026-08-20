class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
                int m = matrix.size();
              int n = matrix[0].size();
        int maxSide = 0;
        vector<vector<int>> dp(m, vector<int>(n, 0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == '0'){
             dp[i][j] = 0;
           }
           if(matrix[i][j] == '1'){
    if(i == 0 || j == 0){
        dp[i][j] = 1;
    }
    else{
        dp[i][j] = min({
            dp[i-1][j],
            dp[i][j-1],
            dp[i-1][j-1]
        }) + 1;
    }
    
 maxSide = max(maxSide, dp[i][j]);
}
            }
        }
         return maxSide * maxSide;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna