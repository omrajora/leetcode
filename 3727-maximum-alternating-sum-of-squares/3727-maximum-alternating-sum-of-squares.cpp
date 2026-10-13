class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
    vector<long long > v;
    for(int i=0;i<nums.size();i++){
        long long sq=1LL *nums[i]*nums[i];
        v.push_back(sq);
    }
    sort(v.begin(),v.end());
        int  n=nums.size();
        int m=n/2;
        long long ans=0;
        for(int i=0;i<nums.size();i++){
          if(i<m){
            ans-=v[i];
          }
          else{
            ans+=v[i];
          }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna