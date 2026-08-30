class Solution {
public:
    double myPow(double x, int n) {
        double ans=1;
        long long power=n;
        if(power<0){
            x=1/x;
            power=-power;
             }
             while(power>0){
                if(power%2==1){
              ans*=x;

                }
      power = power / 2;
    x = x * x;
          
             }
       
        return ans;
    }
};



// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna