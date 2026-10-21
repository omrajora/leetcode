#include <bits/stdc++.h>
using namespace std;

bool check(int x, int d) {
    while (x > 0) {
        if (x % 10 == d) {
            return false;
            }
        x /= 10;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        while (!check(n, d)) {
            n++;
        }
   cout << n << '\n';
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna