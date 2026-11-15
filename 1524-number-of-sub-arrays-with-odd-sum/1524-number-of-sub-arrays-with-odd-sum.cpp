class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
         int mod = 1e9 + 7;
        int odd = 0;
int even = 1;
int ans = 0;
int sum=0;
for(int x: arr){
    sum+=x;
    if(sum%2!=0){
        ans=(ans+even)%mod;
        odd++;
    }
    else{
        ans=(ans+odd)%mod;
        even++;
    }
}
return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna