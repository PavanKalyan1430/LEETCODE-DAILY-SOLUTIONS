
class LRUCache {
private:
    // Structure for the nodes in the doubly linked list, storing key and value.
    // Using std::list<std::pair<int, int>> is simpler as iterators remain valid after splice.
    std::list<std::pair<int, int>> itemList;
    // Hash map to store key and the iterator pointing to its location in the list.
    std::unordered_map<int, std::list<std::pair<int, int>>::iterator> cacheMap;
    int capacity;

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        // Check if the key exists in the cache map
        if (cacheMap.find(key) == cacheMap.end()) {
            return -1;
        }

        // If found, move the item to the front of the list (most recently used)
        // std::list::splice is efficient (O(1)) and keeps iterators valid
        itemList.splice(itemList.begin(), itemList, cacheMap[key]);
        
        // Return the value
        return cacheMap[key]->second;
    }

    void put(int key, int value) {
        // Check if the key already exists
        if (cacheMap.find(key) != cacheMap.end()) {
            // Update the value and move the node to the front
            cacheMap[key]->second = value;
            itemList.splice(itemList.begin(), itemList, cacheMap[key]);
            return;
        }

        // If the key is new, add it to the front of the list and the map
        itemList.push_front({key, value});
        cacheMap[key] = itemList.begin();

        // Check if the cache size exceeds capacity
        if (itemList.size() > capacity) {
            // Evict the least recently used item (the last one in the list)
            std::pair<int, int> last = itemList.back();
            itemList.pop_back();
            cacheMap.erase(last.first);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
