class Solution {
public:
bool dfs(int node,vector<vector<int>>&adj,vector<int>&Visited,vector<int>&pathVisited){
      Visited[node] = 1;
        pathVisited[node] = 1;
        for(int neighbour : adj[node]){
            if (pathVisited[neighbour]) {
        return true;
}
  if (!Visited[neighbour]){
    if (dfs(neighbour, adj, Visited, pathVisited)) {
                    return true;
   }
        }
        }
       pathVisited[node] =0;
        return false;
}
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
            vector<vector<int>> adj(numCourses);
   for (auto &p : prerequisites) {
            adj[p[1]].push_back(p[0]);
        }
 vector<int> visited(numCourses, 0);
        vector<int> pathVisited(numCourses, 0);
        for (int i = 0; i < numCourses; i++) {
            if (!visited[i]) {
                if (dfs(i, adj, visited, pathVisited)) {
                    return false;
                }
            }
        }

        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna