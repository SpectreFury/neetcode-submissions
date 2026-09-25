class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> hashmap;

        for(int num: nums) {
            hashmap[num]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;

        for(auto pairs: hashmap) {
            min_heap.push({pairs.second, pairs.first});

            if(min_heap.size() > k) {
                min_heap.pop();
            }
        }

        vector<int> result;

        while(!min_heap.empty()) {
            auto element = min_heap.top();
            min_heap.pop();
            
            result.push_back(element.second);
        }

        return result;
    }
};
