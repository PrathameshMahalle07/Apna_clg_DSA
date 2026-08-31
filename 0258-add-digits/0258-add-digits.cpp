class Solution {
public:
    int addDigits(int nums) {
        while (nums>9){
    int ans =0;
    while(nums!=0){
        int rem =nums%10;
        ans = ans+rem;
        nums=nums/10;

    }
    nums = ans;
}
return nums;
        
    }
};