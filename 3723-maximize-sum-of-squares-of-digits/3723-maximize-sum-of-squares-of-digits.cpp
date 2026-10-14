class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(num*9<sum) return "";
        string ans="";
        while(sum>=9){
            ans+='9';
            sum-=9;
            num--;
             }
             if (sum > 0) {
    ans += char('0' + sum);
    num--;
}
while(num>0){
    ans+='0';
    num--;
}
    return ans;
}

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna