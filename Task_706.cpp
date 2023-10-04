int speedup = [] {ios::sync_with_stdio(0); cin.tie(0); return 0; } ();
class MyHashMap {

private:
    int size = 1000001;
    vector<int> arr;

public:
    MyHashMap() {
        arr = vector<int>(size, -1);
    }

    void put(int key, int value) {
        arr.at(key) = value;
    }

    int get(int key) {
        return arr[key];
    }

    void remove(int key) {
        arr[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */