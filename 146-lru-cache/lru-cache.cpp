class LRUCache {
public:
    class Node {
    public:
        int key, value;
        Node *prev, *next;

        Node(int k, int v) {
            key = k;
            value = v;
            prev = NULL;
            next = NULL;
        }
    };

    int cap;
    unordered_map<int, Node*> mp;
    Node *head, *tail;

    LRUCache(int capacity) {
        cap = capacity;

        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        head->next = tail;
        tail->prev = head;
    }

    void deleteNode(Node* node) {
        Node* p = node->prev;
        Node* n = node->next;

        p->next = n;
        n->prev = p;
    }

    void insertNode(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        Node* node = mp[key];
        deleteNode(node);
        insertNode(node);

        return node->value;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            deleteNode(node);
            mp.erase(key);
        }

        if (mp.size() == cap) {
            Node* node = tail->prev;
            deleteNode(node);
            mp.erase(node->key);
        }

        Node* newNode = new Node(key, value);
        insertNode(newNode);
        mp[key] = newNode;
    }
};