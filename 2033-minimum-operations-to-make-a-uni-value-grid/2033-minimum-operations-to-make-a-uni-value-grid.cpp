class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int m = grid.size();
int n = grid[0].size();
        vector<int> v;
        for(int i = 0; i < m; i++) {
    for(int j = 0; j < n; j++) {
        v.push_back(grid[i][j]);
    }
}
sort(v.begin(),v.end());
int rem = v[0] % x;
for(int i = 0; i < v.size(); i++) {
    if(v[i] % x != rem) {
        return -1;
    }
}
int mid=v.size()/2;
int median=v[mid];
int ans=0;
for(int i=0;i<v.size();i++){
ans+=abs(v[i]-median)/x;
}
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna