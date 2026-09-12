class Solution {
public:
    int findPeakElement(vector<int>& vec) {
        int st = 0;
        int end = vec.size() - 1;

        while(st < end) {
            int mid = st + (end - st) / 2;

            if(vec[mid] < vec[mid + 1]) {
                st = mid + 1;
            }
            else {
                end = mid;
            }
        }

        return st;
    }
};