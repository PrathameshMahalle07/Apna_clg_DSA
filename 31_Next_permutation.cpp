class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int n = A.size();
        int pivot = -1;

        // Find pivot
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        // If array is in descending order
        if (pivot == -1) {
            reverse(A.begin(), A.end());
            return;
        }

        // Find element just greater than pivot
        for (int i = n - 1; i > pivot; i--) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // Reverse the suffix
        int i = pivot + 1;
        int j = n - 1;

        while (i < j) {
            swap(A[i], A[j]);
            i++;
            j--;
        }
    }
};
