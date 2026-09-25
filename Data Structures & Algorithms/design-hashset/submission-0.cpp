class MyHashSet {
private:
    static const int BUCKET_SIZE = 1000;
    vector<list<int>> buckets;

    int hashFunction(int key) {
        return key % BUCKET_SIZE;
    }
public:
    MyHashSet(): buckets(BUCKET_SIZE) {}
    
    void add(int key) {
        int index = hashFunction(key);

        auto& currentChain = buckets[index];

        auto it = find(currentChain.begin(), currentChain.end(), index);
        if(it == currentChain.end()) {
            currentChain.push_back(index);
        }
    }
    
    void remove(int key) {
        int index = hashFunction(key);

        auto& currentChain = buckets[index];
        auto it = find(currentChain.begin(), currentChain.end(), index);
        if(it != currentChain.end()) {
            currentChain.erase(it);
        }
    }
    
    bool contains(int key) {
        int index = hashFunction(key);

        auto& currentChain = buckets[index];
        auto it = find(currentChain.begin(), currentChain.end(), index);

        return it != currentChain.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */