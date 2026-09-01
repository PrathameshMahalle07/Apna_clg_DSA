class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> game;

        for(int i = 0; i < nums.size(); i++) {
            if(i == 0 || nums[i] != nums[i-1]) {
                game.push_back(nums[i]);
            }
        }

        int size = game.size();

        if(size >= 3) {
            return game[size - 3];
        }
        else {
            return game[size - 1];
        }
    }
};