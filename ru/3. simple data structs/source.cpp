class Queue {
    public:
        Queue() {
            items = {};
        }
        
        bool isEmpty() {
            return items.empty();
        }
        
        void enqueue(int item) {
            items.insert(items.begin(), item);
        }
        
        int dequeue() {
            int item = items.front();
            items.erase(items.begin());
            return item;
        }
        
        int size() {
            return items.size();
        }
        
        int peek() {
            return items.front();
        }
        
    private:
        std::list<int> items;
};

class Stack {
    public:
        Stack() {
            items = {};
        }
        
        bool isEmpty() {
            return items.empty();
        }
        
        void push(int item) {
            items.push_back(item);
        }
        
        int pop() {
            int item = items.back();
            items.pop_back();
            return item;
        }
        
        int peek() {
            return items.back();
        }
        
        int size() {
            return items.size();
        }
        
    private:
        std::vector<int> items;
};

class Deque {
    public:
        Deque() {
            items = {};
        }
        
        bool isEmpty() {
            return items.empty();
        }
        
        void addFront(int item) {
            items.push_front(item);
        }
        
        void addRear(int item) {
            items.push_back(item);
        }
        
        int removeFront() {
            int item = items.front();
            items.pop_front();
            return item;
        }
        
        int removeRear() {
            int item = items.back();
            items.pop_back();
            return item;
        }
        
        int size() {
            return items.size();
        }
        
    private:
        std::deque<int> items;
};
