class Solution {
public:
int getSum(int n){
    int sum=0;
  while(n>0){
    int digit=n%10;
    sum+=digit*digit;
    n=n/10;

  }
  return sum;
}
    bool isHappy(int n) {
        set<int>a;
        while(n!=1){
            if(a.count(n)){
                return false;
            }
            a.insert(n);
            n=getSum(n);
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna