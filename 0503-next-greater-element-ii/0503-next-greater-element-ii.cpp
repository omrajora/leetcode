class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
vector<int> res(n, -1);
stack<int> st; for (int i = 0; i < 2 * n; i++) {
    int x = nums[i % n];

while (!st.empty() && x > nums[st.top()]) {
    res[st.top()] = x;
    st.pop();
}
if (i < n) {
    st.push(i);
}
}
return res;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna