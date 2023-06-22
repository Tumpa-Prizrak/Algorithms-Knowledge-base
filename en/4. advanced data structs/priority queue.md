# Priority Queue
```py
class PriorityQueue:
    def __init__(self):
        self.queue = []

    def is_empty(self):
        return len(self.queue) == 0

    def enqueue(self, item, priority):
        self.queue.append((priority, item))

    def dequeue(self):
        max_priority, max_item = self.queue[0]
        for priority, item in self.queue:
            if priority > max_priority:
                max_priority = priority
                max_item = item
        self.queue.remove((max_priority, max_item))
        return max_item

    def size(self):
        return len(self.queue)
```

A priority queue is a data structure that dequeues elements in priority order. Elements are dequeued based on their priority - highest priority elements are dequeued first.

# Some key points about priority queues:

- Elements are dequeued in priority order - highest priority elements are dequeued first.

- Basic operations are:
    - enqueue(item, priority) - Add an item with a given priority.
    - dequeue() - Remove and return the highest priority item.
    - is_empty() - Check if the queue is empty.
    - size() - Get the number of items in the queue.

- Priority queues are useful when you want to process elements in order of priority. For example, a priority queue can be used for task scheduling where high priority tasks are executed first.

- Common implementations of priority queues include:
    - Heap - Enqueue and dequeue operations take O(logn) time. Most efficient implementation.
    - Sorted list - Enqueue takes O(n) time and dequeue takes O(1) time. Simple but not efficient.
    - Unsorted list - Enqueue takes O(1) time and dequeue takes O(n) time. Not efficient.

- The time complexity of operations depends on the implementation. For heaps, the time complexity is O(logn). For sorted lists, enqueue is O(n) and dequeue is O(1). For unsorted lists, enqueue is O(1) and dequeue is O(n).

- Priority queues are useful for scheduling tasks, Dijkstra's algorithm, Huffman coding, and handling interrupts in operating systems.

- A priority queue can be implemented using a heap, sorted list, or unsorted list. Heaps are the most efficient implementation with O(logn) time for enqueue and dequeue.

- Elements are dequeued in priority order - the element with the highest priority is dequeued first. Priority is determined by the priority value passed to enqueue.