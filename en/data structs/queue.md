# Queue
```py
class Queue:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def enqueue(self, item):
        self.items.insert(0, item)

    def dequeue(self):
        return self.items.pop()

    def size(self):
        return len(self.items)

    def peek(self):
        return self.items[len(self.items) - 1]
```

A queue is a linear data structure that follows the FIFO (First In First Out) principle. Elements are added to the back of the queue and removed from the front.

## Some key points about queues:

- Elements are added to the back of the queue and removed from the front. This is the FIFO (First In First Out) principle.

- Basic operations are:
    - enqueue(item) - Add an item to the back of the queue.
    - dequeue() - Remove an item from the front of the queue.
    - peek() - Get the front item without removing it.
    - is_empty() - Check if the queue is empty.
    - size() - Get the number of items in the queue.

- Queues are useful when you want to process elements in the order they arrive. For example, a queue can be used to keep track of pending tasks or requests.

- Common implementations of queues include:
    - Linked list - Enqueue and dequeue operations take O(1) time.
    - Array - Enqueue and dequeue operations take O(1) time but may require resizing the array.
    - Stack - Enqueue and dequeue operations take O(n) time where n is the number of elements in the queue. Not efficient but simple to implement.

- The time complexity of enqueue and dequeue operations depends on the implementation. For linked lists and arrays, the time complexity is O(1). For stacks, the time complexity is O(n).

- Queues follow the FIFO principle - the first element added is the first element removed. This is useful when you want to process elements in the order they arrive.

- Common use cases of queues include task queues, breadth-first search, and modeling real-world queues.
