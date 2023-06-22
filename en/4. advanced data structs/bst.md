# BST (Binary Search Tree)
```py
class BST:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        
    def insert(self, value):
        if value < self.value:
            if self.left is None:
                self.left = BST(value)
            else:
                self.left.insert(value)
        else:
            if self.right is None:
                self.right = BST(value)
            else:
                self.right.insert(value)
                
    def search(self, value):
        if value < self.value:
            if self.left is None:
                return False
            else:
                return self.left.search(value)
        elif value > self.value:
            if self.right is None:
                return False
            else:
                return self.right.search(value)
        else:
            return True
        
    def inorder(self):
        result = []
        if self.left:
            result += self.left.inorder()
        result.append(self.value)
        if self.right:
            result += self.right.inorder()
        return result
```
*P.S. you can also find AVL Tree at source.py*

A binary search tree (BST) is a binary tree where nodes are ordered according to a key value. Keys in the left subtree are less than the root node, and keys in the right subtree are greater than the root node.

## Some key points about BSTs:

- Nodes are ordered according to a key value. Left subtree keys < root node key < right subtree keys.

- Basic operations are:
    - insert(key) - Insert a new node with the given key.
    - search(key) - Search for a node with the given key.
    - delete(key) - Delete the node with the given key.
    - inorder() - Traverse the tree in ascending order.
- BSTs are useful for fast lookups, insertions, and deletions. The time complexity for these operations is O(n) where n is the height of the tree.

- A balanced BST has a height of O(logn) so the time complexity of operations is O(logn). Unbalanced BSTs have a height of O(n) so time complexity of O(n).

- The time complexity of operations depends on the height of the tree. For balanced BSTs, the time complexity is O(logn). For unbalanced BSTs, the time complexity is O(n).

- BSTs are used to implement maps, sets, and lookup tables. They are more efficient than linked lists and arrays for these use cases.

- A BST can be implemented using a linked data structure with nodes that have keys, values, and references to left and right child nodes.

- Nodes are ordered by the key value. Left subtree keys are less than the root node key, and right subtree keys are greater than the root node key.

- A balanced BST has a height of O(logn) which results in O(logn) time complexity for operations. An unbalanced BST has a height of O(n) and time complexity of O(n).
