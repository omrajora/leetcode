class Solution {
public:
    int strStr(string haystack, string needle) {
        // Your current approach uses a Brute Force string matching algorithm.
        // Time Complexity: O(N * M), where N is haystack length and M is needle length.
        // Space Complexity: O(1), as no extra space is used.
        // This is correct and will pass the "Easy" constraints on LeetCode.
        // For more optimal performance on larger datasets, you could explore KMP (Knuth-Morris-Pratt) or Rabin-Karp.
        
        // Note: Be careful with 'haystack.size() - needle.size()' when using unsigned types (like size_t).
        // If needle is larger than haystack, this can cause an underflow/wrap-around error.
        // A safer way is: i <= (int)haystack.size() - (int)needle.size()
        if (needle.size() > haystack.size())
    return -1;
        
        for(int i=0;i<=haystack.size()-needle.size();i++){
             bool match = true;
            for(int j=0;j<needle.size();j++){
              if(haystack[i + j] != needle[j]){
                 match = false;
                break;
              } 
            }
                  if(match)
    return i;

        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna