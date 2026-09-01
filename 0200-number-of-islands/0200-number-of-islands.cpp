class Solution {
public:
void dfs(vector<vector<char>>& grid, int i, int j) {
if (i < 0 || i >= grid.size() ||
    j < 0 || j >= grid[0].size() ||
    grid[i][j] == '0') {
    return;
    }
    grid[i][j]='0';// ye mark visited k liye
      dfs(grid, i-1, j); // up
    dfs(grid, i+1, j); // down
    dfs(grid, i, j-1); // left
    dfs(grid, i, j+1); // right

}
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
            if(grid[i][j]=='1'){
                count++;
            dfs(grid,i,j);
            }
            }
        }
        return count;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna