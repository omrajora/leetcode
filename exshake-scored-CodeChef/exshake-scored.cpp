#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
vector<int>v(n);
for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 sort(v.begin(), v.end());
 int p=0;
 int count=0;
 for(int i=0;i<n;i++){
     int newp=p+v[i];
     int handshake=newp*(newp-1)/2;
     if(handshake<=m){
         p=newp;
         count++;
     }
     else break;
 }
 cout<<count<<endl;
 
}


}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna