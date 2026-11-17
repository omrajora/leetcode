class Solution {
public:
    int getLucky(string s, int k) {
     string temp="";
     for(char ch : s){
        int num =ch -'a'+1;
        temp+=to_string(num);
     }   
     int sum=0;
     for(int i=0;i<k;i++){
        sum=0;
        for(char ch : temp){
            sum+=ch-'0';
        }
        temp=to_string(sum);
     }
     return stoi(temp);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna