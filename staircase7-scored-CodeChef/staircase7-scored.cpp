#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;

        map<int, int> freq;
        int x;

        for (int i = 1; i <= n; i++) {
            cin >> x;
            freq[x - i]++;
        }

        int maxFreq = 0;

        for (auto p : freq) {
            maxFreq = max(maxFreq, p.second);
        }

        cout << n - maxFreq << endl;
}

}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna