class MyHashMap {
private:
    static const int BUCKET_SIZE = 10007;

    vector<list<pair<int, int>>> bucket;

    int hash(int key) {
        return key % BUCKET_SIZE;
    }

public:
    MyHashMap(): bucket(BUCKET_SIZE) {}
    
    void put(int key, int value) {
        int index = hash(key);

        auto& currentChain = bucket[index];

        for(auto& entry: currentChain) {
            if(entry.first == key) {
                entry.second = value;
                return;
            }
        }

        currentChain.push_back({ key, value });
    }
    
    int get(int key) {
        int index = hash(key);

        auto& currentChain = bucket[index];

        for(auto& entry: currentChain) {
            if(entry.first == key) {
                return entry.second;
            }
        }

        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);

        auto& currentChain = bucket[index];

        for(auto it = currentChain.begin(); it != currentChain.end(); ++it) {
            if(it->first == key) {
                currentChain.erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */