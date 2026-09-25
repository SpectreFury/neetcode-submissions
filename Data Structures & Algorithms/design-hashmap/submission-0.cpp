class MyHashMap {
private:
    static const int BUCKET_SIZE = 1000;
    vector<list<pair<int, int>>> buckets;

    int hashFunction(int key) {
        return key % BUCKET_SIZE;
    }

public:
    MyHashMap(): buckets(BUCKET_SIZE) {}
    
    void put(int key, int value) {
        const int index = hashFunction(key);

        list<pair<int, int>>& currentChain = buckets[index];
        for(auto& entry: currentChain) {
            if(entry.first == key) {
                entry.second = value;
                return;
            }
        }

        currentChain.push_back({key, value});
    }
    
    int get(int key) {
        const int index = hashFunction(key);

        list<pair<int, int>>& currentChain = buckets[index];
        for(auto& entry: currentChain) {
            if(entry.first == key) {
                return entry.second;
            }
        }

        return -1;
    }
    
    void remove(int key) {
        const int index = hashFunction(key);

        list<pair<int, int>>& currentChain = buckets[index];
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