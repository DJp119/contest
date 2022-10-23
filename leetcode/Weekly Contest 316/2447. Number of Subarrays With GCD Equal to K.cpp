class Solution {
public:
  int subarrayGCD(vector<int>& nums, int k){
    int n = nums.size(), ans = 0;
    for(int i=0; i<n; i++){
      int gcd = nums[i];
      for(int j=i; j<n; j++){
        gcd = __gcd(nums[j], gcd);
        if(gcd == k)
          ans += 1;
        if(gcd < k)
          break;
      }
    }
    return ans;
  }
};
