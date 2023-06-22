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

class AVLNode:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.height = 1
        
class AVLTree:
    def __init__(self):
        self.root = None
        
    def insert(self, value):
        self.root = self._insert(self.root, value)
        
    def _insert(self, node, value):
        if not node:
            return AVLNode(value)
        if value < node.value:
            node.left = self._insert(node.left, value)
        else:
            node.right = self._insert(node.right, value)
            
        node.height = max(self.get_height(node.left), self.get_height(node.right)) + 1
        
        balance = self.get_balance(node)
        if balance > 1 and value < node.left.value:
            return self.right_rotate(node)
        if balance < -1 and value > node.right.value:
            return self.left_rotate(node)
        if balance > 1 and value > node.left.value:
            node.left = self.left_rotate(node.left)
            return self.right_rotate(node)
        if balance < -1 and value < node.right.value:
            node.right = self.right_rotate(node.right)
            return self.left_rotate(node)
            
        return node
    
    def left_rotate(self, node):
        right_child = node.right
        node.right = right_child.left
        
        right_child.left = node
        node.height = max(self.get_height(node.left), self.get_height(node.right)) + 1
        right_child.height = max(self.get_height(right_child.left), self.get_height(right_child.right)) + 1
        
        return right_child
    
    def right_rotate(self, node):
        left_child = node.left
        node.left = left_child.right
        
        left_child.right = node
        node.height = max(self.get_height(node.left), self.get_height(node.right)) + 1
        left_child.height = max(self.get_height(left_child.left), self.get_height(left_child.right)) + 1
        
        return left_child
    
    def get_height(self, node):
        if not node:
            return 0
        return node.height

class DisjointSet:
    def __init__(self, n):
        self.parent = list(range(n))
        self.rank = [0] * n
        
    def find(self, x):
        if self.parent[x] != x:
            self.parent[x] = self.find(self.parent[x])
        return self.parent[x]
    
    def union(self, x, y):
        x_root = self.find(x)
        y_root = self.find(y)
        
        if self.rank[x_root] < self.rank[y_root]:
            self.parent[x_root] = y_root
        elif self.rank[x_root] > self.rank[y_root]:
            self.parent[y_root] = x_root
        else:
            self.parent[y_root] = x_root
            self.rank[x_root] += 1
            
    def connected(self, x, y):
        return self.find(x) == self.find(y)