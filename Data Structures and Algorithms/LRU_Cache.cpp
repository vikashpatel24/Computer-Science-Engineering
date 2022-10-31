class LRUCache {
public:
    
    // if I put any key,value then check if its already there in my map, if its there erase        from the map and insert new node of given key,value
    // if capacity is full then I have to delete Leasat recently used node which exits in          the last
    
    // In case of get, the given key is present in map then erase it from its position and          assign the new position position right by making new node(copy of given key) and            insert also in to the map with new address
    class Node{
    
        public:

        Node* next,*prev;
        int key,val;

        Node(int _key, int _value){
            key =_key, val = _value;
        }
    };

    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    int cap;
    
    unordered_map<int, Node*> mp;               // <key, DLL_Node>
        
    LRUCache(int capacity) {
        cap= capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    
    void addNode(Node* newNode){      // Delete from DLL
        
        Node* tmp = head->next;
        
        newNode->next = tmp;
        newNode->prev = head;
        head->next = newNode;  
        tmp->prev = newNode;
    }
    
    void deleteNode(Node* delNode){   // delete form DLL
        
        Node* delprev = delNode->prev;
        Node* delNext = delNode->next;
        delprev->next = delNext;
        delNext->prev = delprev;
        
    }
    
    int get(int key) {
        
        
        if(mp.count())
            return 
        if(mp.count(key)){            // if key is present
            Node* getNode = mp[key];
            deleteNode(getNode);      // delete the node from DLL
            mp.erase(key);            // delete the node from hashmap
            addNode(getNode);         // add new node(copy of deleted node) into DLL
            mp[key] = getNode;        // add node into hashmap
            return getNode->val;
        }
        
        
        
    }
    
    void put(int key, int value) {
        
         
        
        // if key is present in hashmap
        if(mp.count(key)){
            Node* existingNode = mp[key];
            mp.erase(key);
            deleteNode(existingNode); // or mp[key]
        }
        
        if(mp.size()==cap){ // cap is full then deleting the least recently used node 
            mp.erase(tail->prev->key);
            deleteNode(tail->prev); // tail = tail->prev;
        }
        
        
        Node* newNode = new Node(key, value);
        mp[key] = newNode;  // insert newnode into hashmap
        addNode(newNode);  // add newNod into DLL
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */