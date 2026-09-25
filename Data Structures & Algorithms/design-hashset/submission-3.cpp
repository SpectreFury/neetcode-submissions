class MyHashSet {
private:
    static const int BUCKET_SIZE = 10007;
    vector<list<int>> buckets;

    int hash(int key) {
        return key % BUCKET_SIZE;
    }

public:
    MyHashSet(): buckets(BUCKET_SIZE) {}
    
    void add(int key) {
        int index = hash(key);

        list<int>& currentChain = buckets[index];

        for(auto& k: currentChain) {
            if(k == key) {
                return;
            }
        }

        currentChain.push_back(key);
    }
    
    void remove(int key) {
        int index = hash(key);

        list<int>& currentChain = buckets[index];

        for(auto it = currentChain.begin(); it != currentChain.end(); ++it) {
            if(*it == key) {
                currentChain.erase(it);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int index = hash(key);

        list<int>& currentChain = buckets[index];

        for(auto& k: currentChain) {
            if(k == key) {
                return true;
            }
        }

        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */