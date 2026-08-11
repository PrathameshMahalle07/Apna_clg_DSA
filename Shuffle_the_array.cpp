#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>array={1,2,3,4,5,6};
    vector<int> carry;
    for(int i=0 ; i<array.size() / 2; i++){
        carry.push_back(array[i]);
        carry.push_back(array[3+i]);
    }
    for(int value :carry){
        cout<<value;
    }
    return 0;
}


//for leetcode 

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> carry;

        for(int i = 0; i < n; i++) {
            carry.push_back(nums[i]);
            carry.push_back(nums[n + i]);
        }

        return carry;
    }
};