class Solution {
   public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> leftArray;
        for (int i = left; i <= mid; i++) {
            leftArray.push_back(nums[i]);
        }

        vector<int> rightArray;
        for (int i = mid + 1; i <= right; i++) {
            rightArray.push_back(nums[i]);
        }

        int i = left;  // nums[i]

        int j = 0;  // leftarr
        int k = 0;  // rightarr

        while (j < leftArray.size() && k < rightArray.size()) {
            if (leftArray[j] <= rightArray[k]) {
                nums[i] = leftArray[j];
                j++;
            }

            else {
                nums[i] = rightArray[k];
                k++;
            }

            i++;
        }

        while (j < leftArray.size()) {
            nums[i] = leftArray[j];
            j++;
            i++;
        }

        while (k < rightArray.size()) {
            nums[i] = rightArray[k];
            k++;
            i++;
        }
    }

    vector<int> mergeSort(vector<int>& nums, int left, int right) {
        if (left == right) return nums;

        int mid = (left + right) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);

        return nums;
    }

    vector<int> sortArray(vector<int>& nums) { return mergeSort(nums, 0, nums.size() - 1); }
};