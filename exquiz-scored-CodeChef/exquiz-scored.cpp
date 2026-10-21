#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,s;
    cin>>n>>s;
    int ans=-1;
    for (int c = 0; c <= n; c++) {
    int w = 4 * c - s;
    if( w>=0 && c+w<=n){
         if (ans == -1 || c + w < ans) {
                    ans = c + w;
    }
    }
}
cout << ans << endl;

}

}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna