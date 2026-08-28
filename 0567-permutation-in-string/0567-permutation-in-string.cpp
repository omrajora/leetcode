class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int>freq(26,0);
        for(char ch : s1){
            freq[ch-'a']++;
        }
        vector<int> freq1(26, 0);
        int left = 0;
       int right = 0;
   while(right<s2.length()){
    freq1[s2[right] - 'a']++;
    if(right-left+1==s1.length()){
        if(freq==freq1){
            return true;
        }
        freq1[s2[left] - 'a']--;
     left++;
    }
    right++;
   }
   return false;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna