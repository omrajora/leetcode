#include <bits/stdc++.h>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int n,k;
     cin>>n>>k;
     string s;
     cin>>s;
     int ans=0;
     vector<bool>Protectedroom(n,false);
      for (int i = 0; i < n; i++) {
     if(s[i]=='1' && !Protectedroom[i]){
         int p = min(i + k, n - 1);
         ans++;
         for(int j=max(0,p-k);j<=p;j++){
               Protectedroom[j] = true;
         }
     }
 }
 cout<<ans<<endl;
}
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna