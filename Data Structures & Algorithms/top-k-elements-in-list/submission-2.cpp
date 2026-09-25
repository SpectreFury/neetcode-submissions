class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;

        for(int i = 0; i < nums.size(); i++) {
            hashmap[nums[i]]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        for(auto pairs: hashmap) {
            min_heap.push({pairs.second, pairs.first});

            if(min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<int> result;

        while(!min_heap.empty())  {
            auto pairs = min_heap.top();
            min_heap.pop();

            result.push_back(pairs.second);
        }

        return result;
    }
};
