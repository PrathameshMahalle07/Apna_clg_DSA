class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count =0 ; 
        int ans =0 ;
        for(int ha: nums){
            if(ha==1){
                count++;
            }else{
                count=0;
            }
            ans=max(ans, count);
        }
        return ans;
        
    }
};