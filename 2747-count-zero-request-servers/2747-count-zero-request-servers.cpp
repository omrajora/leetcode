
class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs,
                             int x, vector<int>& queries) {

        sort(logs.begin(), logs.end(),
             [](auto &a, auto &b) {
                 return a[1] < b[1];
             });

        vector<pair<int,int>> q;

        for(int i = 0; i < queries.size(); i++) {
            q.push_back({queries[i], i});
        }

        sort(q.begin(), q.end());

        vector<int> count(n + 1, 0);
        vector<int> ans(queries.size());

        int active = 0;
        int left = 0, right = 0;

        for(int i = 0; i < q.size(); i++) {

            int t = q[i].first;
            int start = t - x;

            while(right < logs.size() && logs[right][1] <= t) {
                int id = logs[right][0];

                if(count[id] == 0)
                    active++;

                count[id]++;
                right++;
            }

            while(left < right && logs[left][1] < start) {
                int id = logs[left][0];

                count[id]--;

                if(count[id] == 0)
                    active--;

                left++;
            }

            ans[q[i].second] = n - active;
        }

        return ans;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna