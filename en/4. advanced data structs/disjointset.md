# Disjoint-set
```py
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
```

A disjoint-set data structure (also called a union-find data structure) is a data structure that tracks a set of elements partitioned into a number of disjoint (non-overlapping) subsets.

# Some key points about disjoint-set data structures:

- Elements are partitioned into disjoint subsets. Each element belongs to exactly one subset.

- Basic operations are:
    - find(x) - Find the subset that contains element x.
    - union(x, y) - Union the subsets that contain x and y.
    - connected(x, y) - Check if x and y belong to the same subset.
- Disjoint-set data structures are useful for keeping track of connectivity in graphs. They can be used to detect cycles in graphs.

- The time complexity of operations depends on the implementation. Two common implementations are:
    - Quick find - All operations are O(1) time. Union is slow since it reassigns all elements.
    - Quick union - Find is O(n) time, union and connected are O(1) time. Slow find operations.
    - Weighted quick union - Find is O(logn) time, union and connected are O(1) time. Uses rank to balance tree.
- Disjoint-set data structures are used to detect cycles in graphs, model connectivity in networks, and perform Kruskal's minimum spanning tree algorithm.

- A disjoint-set data structure can be implemented using an array to represent the elements, and storing the parent and rank of each element.

- The disjoint subsets can be represented using trees, where each node points to its parent. The root node of each tree represents the subset.

- The time complexity of operations depends on the implementation. Quick find has O(1) time but slow union. Weighted quick union has O(logn) time and fast union.

- The rank value is used to keep the trees balanced, so the height of any tree is O(logn). This results in the O(logn) time complexity.