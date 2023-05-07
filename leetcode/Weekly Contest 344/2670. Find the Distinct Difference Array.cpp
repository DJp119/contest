class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> diff;
        for(int i = 0 ; i<nums.size();i++){
            map<int, int> distinct_pre;
            map<int, int> distinct_suff;
            for(int j = 0 ; j<=i;j++){
                distinct_pre[nums[j]]++;
            }
            for(int j = nums.size()-1 ; j>i;j--){
                distinct_suff[nums[j]]++;
            }
            int freq_diff = distinct_pre.size()-distinct_suff.size();
            diff.push_back(freq_diff);
        }
        return diff;
    }
};
