class Solution {
public:
void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int Color,int delRow[],int delCol[],int iniColor){
    ans[row][col]=Color;
    int n=image.size();
    int m=image[0].size();
    for(int i=0;i<4;i++){
int nrow=row+delRow[i];
int ncol=col+delCol[i];
if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==iniColor && ans[nrow][ncol]!=Color ){
    dfs(nrow,ncol,ans,image,Color,delRow,delCol,iniColor);
}
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int iniColor=image[sr][sc];
        vector<vector<int>> ans=image;
        int delRow[]={-1,0,+1,0};
        int delCol[]={0,+1,0,-1};
        dfs(sr,sc,ans,image,color,delRow,delCol,iniColor);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna