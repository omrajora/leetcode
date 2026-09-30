#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t--){
      int n,m,k;
      cin>>n>>m>>k;
      bool occpd[101]={};
      for(int i=0;i<m;i++){
           int x;
    cin >> x;
    occpd[x] = true;
      }
      for(int prsn = 0; prsn< k; prsn++){
    
    for(int seat = 1; seat <= n; seat++){
        
        if(occpd[seat] == false){
            
            cout << seat << " ";
            occpd[seat] = true;
            break;
        }
    }
}
cout<<endl;
  }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna