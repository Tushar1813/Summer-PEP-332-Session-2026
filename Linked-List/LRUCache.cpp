class LRUCache {
  public:
    class Node{
        public:
        int key;
        int value;
        Node* prev;
        Node* next;
        
        Node(int k,int v){
            key=k;
            value=v;
            prev=NULL;
            next=NULL;
        }
    };
    unordered_map<int, Node*> cache;
    int cap=0;
    Node* head,*tail;
    
    
    // IF we have to insert a node immediately after head which will make it most recently used {MRU}
    
    void addToFront(Node* node){
        node->next=head->next;
        node->prev=head;
        head->next->prev=node;
        head->next=node;
        
    }
    
    void removeNode(Node* node){
        Node* left=node->prev;
        Node* right=node->next;
        
        left->next=right;
        right->prev=left;
    }
    
    void moveToFront(Node* node){
        removeNode(node);
        addToFront(node);
    }
    
    
    LRUCache(int capacity) {
        // code here
        cap=capacity;
        head= new Node(-1,-1);
        tail=new Node(-1,-1);
        
        head->next=tail;
        tail->prev=head;
         
    }

    int get(int key) {
        // code here
        if(cache.find(key)==cache.end()){
            return -1;
        }
        Node* node=cache[key];
        moveToFront(node);
        return node->value;
    }

        
    void put(int key, int value) {
        // Case!: key already exits -> update the val and move to front
        if(cache.find(key)!= cache.end()){
            Node* node=cache[key];
            node->value=value;
            moveToFront(node);
            return;
        }
        
        //Cache full -> remove LRU
        if(cache.size() == cap && cap > 0){
            Node* node= tail->prev;
            cache.erase(node->key);
            removeNode(node);
            delete node;
        }
        //Create new node
        Node* node= new Node(key, value);
        cache[key]= node;
        addToFront(node);
    }
};