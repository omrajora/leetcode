class Solution {
public:
    int minInsertions(string s) {
    int needed=0;
    int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                if(needed%2==1){
                    count++;
                    needed--;
                }
                needed+=2;
            }
            else{
                needed--;
                if(needed<0){
                    count++;
                    needed=1;
                }
            }
        }
        return count +needed;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna