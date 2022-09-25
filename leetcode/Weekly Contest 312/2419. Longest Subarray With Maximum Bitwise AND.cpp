class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mxm=0;       
        for(int i=0;i<nums.size();i++)           //finding maximum value
            mxm=max(mxm,nums[i]);   
        int cnt=0,i,ans=1;                           
        for(i=0;i<nums.size();i++){             //finding continuous occurences of mxm number 
            if(nums[i]==mxm){
                cnt++;
            }
            else
                cnt=0;
            ans=max(ans,cnt);
        }
        return ans;
    }
};


/* 
TC: O(N)
SC: O(1) (auxiliary space)
where N is size of num array.
*/
