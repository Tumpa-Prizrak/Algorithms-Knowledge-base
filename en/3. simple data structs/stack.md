# Stack
```py
class Stack:
    def __init__(self):
        self.items = []

    def is_empty(self):
        return self.items == []

    def push(self, item):
        self.items.append(item)

    def pop(self):
        return self.items.pop()

    def peek(self):
        return self.items[len(self.items) - 1]

    def size(self):
        return len(self.items)
```

A stack is a linear data structure that follows the LIFO (Last In First Out) principle. Elements are added to the top of the stack and removed from the top.

## Some key points about stacks:

- Elements are added to the top of the stack and removed from the top. This is the LIFO (Last In First Out) principle.

- Basic operations are:
    - push(item) - Add an item to the top of the stack.
    - pop() - Remove an item from the top of the stack.
    - peek() - Get the top item without removing it.
    - is_empty() - Check if the stack is empty.
    - size() - Get the number of items in the stack.

- Stacks are useful when you want to reverse the order of elements. For example, a stack can be used to undo operations or traverse a tree.

- Common implementations of stacks include:
    - Linked list - Push and pop operations take O(1) time.
    - Array - Push and pop operations take O(1) time but may require resizing the array.
    - Queue - Push and pop operations take O(n) time where n is the number of elements in the stack. Not efficient but simple to implement.

- The time complexity of push and pop operations depends on the implementation. For linked lists and arrays, the time complexity is O(1). For queues, the time complexity is O(n).

- Stacks follow the LIFO principle - the last element added is the first element removed. This is useful when you want to reverse the order of elements.

- Common use cases of stacks include undo/redo operations, tree traversal, and reversing elements.

- A stack can be implemented using a linked list or array. The stack operations are O(1) for linked lists and arrays, but O(n) for queues.