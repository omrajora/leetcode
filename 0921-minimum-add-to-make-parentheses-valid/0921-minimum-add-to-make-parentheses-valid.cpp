class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int bal=0;
        for(char ch :s){
            if(ch=='('){
                bal++;

            }
            else{
                if(bal>0)bal--;
        else ans++;
            }
        }
        return ans+bal;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna