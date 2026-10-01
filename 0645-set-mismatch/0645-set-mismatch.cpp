class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>arr(2);
        int a;
        int b;
        int expectedsum=0;
        int actualsum=0;
        int n =nums.size();
        unordered_set<int>s;
        for(int i =0 ; i<n ; i++){
           
                actualsum = actualsum+nums[i];
                if(s.find(nums[i])!=s.end()){
                    arr[0]=nums[i];
                    a=nums[i];
                    
                }
                s.insert(nums[i]);
            


        }
        expectedsum = n*(n+1)/2;
        b = expectedsum -actualsum+a;
        arr[1]=b;
        return arr;
        
        
    }
};