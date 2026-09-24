class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int st =0 ;
        int sum=0 ;
        int ans=INT_MAX;
        for(int right=0; right<nums.size(); right++){
            sum = sum +nums[right];
            while(sum>=target){
                ans=min(ans, right-st+1);
                sum -=nums[st];
                st++;
            }
        }
        return ans== INT_MAX? 0 : ans;
        
    }
};