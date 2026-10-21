#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n,d;
    cin>>n>>d;
    int x=n;
 while(true){
     int temp=x;
     bool flag=false;
       while (temp > 0) {
                int digit = temp % 10;
if (digit == d) {
        flag = true;
  break;
        }
    temp = temp / 10;
    }
if (flag == false) {
    cout << x << endl;
break;
                }
    x++;
 }
}

}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna