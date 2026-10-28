
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int score = 0;
for (int i = 0; i < n - 1; i++) {
            if (v[i] == v[i + 1]) {
                score++;
            }
        }
        int ans = score;
        int best = -100;
        for (int i = 0; i < n - 1; i++) {
            int equal = (v[i] == v[i + 1]);
            int left = (v[i] + 1 == v[i + 1]) - equal;
            int right = (v[i] == v[i + 1] + 1) - equal;
            ans = max(ans, score + left);
            ans = max(ans, score + right);
            if (best != -100) {
                ans = max(ans, score + best + left);
            }
   best = max(best, right);
        }
        cout << ans << '\n';
    }
    return 0;
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna