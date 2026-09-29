class DynamicArray {
private:
    int* arr;
    int size = 0;
    int capacity = 0;

public:

    DynamicArray(int capacity) {
        arr = new int[capacity];
        this->capacity = capacity;
        this->size = 0;
    }

    int get(int i) {
        if(i >= 0 && i < size) {
            return arr[i];
        }

        return -1;
    }

    void set(int i, int n) {
        if(i >= 0 && i < size) {
            arr[i] = n;
        }
    }

    void pushback(int n) {
        if(size == capacity) {
            resize();
        }

        arr[size] = n;
        size++;
    }

    int popback() {
        if(size == 0) return -1;

        size--;
        return arr[size];
    }

    void resize() {
        int* newArray = new int[capacity * 2];

        for(int i = 0; i < size; i++){
            newArray[i] = arr[i];
        }

        delete[] arr;
        arr = newArray;
        capacity = capacity * 2;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }
};
