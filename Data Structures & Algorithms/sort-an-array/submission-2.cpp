class Solution {
public:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> left_subarr;
        for(int i = left; i <= mid; i++) {
            left_subarr.push_back(nums[i]);
        }

        vector<int> right_subarr;
        for(int i = mid + 1; i <= right; i++) {
            right_subarr.push_back(nums[i]);
        }

        int i = left; // real array index
        int j = 0; // left subarr
        int k = 0; // right subarr

        while(j < left_subarr.size() && k < right_subarr.size()) {
            if(left_subarr[j] <= right_subarr[k]) {
                nums[i] = left_subarr[j];
                j++;
            }
            else {
                nums[i] = right_subarr[k];
                k++;
            }

            i++;
        }

        while(j < left_subarr.size()) {
            nums[i] = left_subarr[j];
            j++;
            i++;
        }

        while(k < right_subarr.size()) {
            nums[i] = right_subarr[k];
            k++;
            i++;
        }
    }

    vector<int> mergeSort(vector<int>& nums, int left, int right) {
        if (left == right) {
            return nums;
        }

        int mid = (left + right) / 2;

        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        merge(nums, left, mid, right);

        return nums;
    }
    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size() - 1);
    }
};