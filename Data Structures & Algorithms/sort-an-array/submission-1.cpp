class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> heap;

        for(int& num: nums) {
            heap.push(num);
        }

        int index = 0;
        while(!heap.empty()) {
            nums[index++] = heap.top();
            heap.pop();
        }

        return nums;
    }
};