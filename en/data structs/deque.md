# Deque
```py
class Deque:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def add_front(self, item):
        self.items.insert(0, item)

    def add_rear(self, item):
        self.items.append(item)

    def remove_front(self):
        return self.items.pop(0)

    def remove_rear(self):
        return self.items.pop()

    def size(self):
        return len(self.items)
```

A deque (double-ended queue) is a linear data structure that supports adding and removing elements from both the front and back.

## Some key points about deques:

- Elements can be added and removed from both the front and back of the deque.

- Basic operations are:
    - add_front(item) - Add an item to the front of the deque.
    - add_rear(item) - Add an item to the back of the deque.
    - remove_front() - Remove an item from the front of the deque.
    - remove_rear() - Remove an item from the back of the deque.
    - is_empty() - Check if the deque is empty.
    - size() - Get the number of items in the deque.

- Deques are useful when you want to add and remove elements from both ends. For example, a deque can be used for breadth-first search and implementing queues that can grow from both sides.

- Common implementations of deques include:
    - Doubly linked list - All operations take O(1) time.
    - Array - Operations take O(1) time but may require resizing the array.
    - Stack and queue - Operations take O(n) time where n is the number of elements in the deque. Not efficient but simple to implement.

- The time complexity of operations depends on the implementation. For doubly linked lists and arrays, the time complexity is O(1). For stacks and queues, the time complexity is O(n).

- Deques can act as both stacks (LIFO) and queues (FIFO) since elements can be added and removed from both ends.

- Common use cases of deques include breadth-first search, queue that grows from both sides, and implementing stacks and queues.

- A deque can be implemented using a doubly linked list or array. The deque operations are O(1) for these implementations.
  