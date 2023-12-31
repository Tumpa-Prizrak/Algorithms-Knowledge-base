# BST (Бинарное дерево поиска)
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
*P.S. Вы также можете найти AVL Tree в source.py*.

Двоичное дерево поиска (BST) - это двоичное дерево, в котором узлы упорядочены в соответствии со значением ключа. Ключи в левом поддереве меньше, чем корневой узел, а ключи в правом поддереве больше, чем корневой узел.

## Некоторые ключевые моменты о BST:

- Узлы упорядочиваются в соответствии со значением ключа. Ключи левого поддерева < ключ корневого узла < ключи правого поддерева.

- Основные операции:
    - insert(key) - Вставка нового узла с заданным ключом.
    - search(key) - Поиск узла с заданным ключом.
    - delete(key) - Удалить узел с заданным ключом.
    - inorder() - Обход дерева в порядке возрастания.
- BST полезно для быстрого поиска, вставки и удаления. Временная сложность для этих операций составляет O(n), где n - высота дерева.

- Высота сбалансированного BST равна O(logn), поэтому временная сложность операций равна O(logn). Несбалансированные BST имеют высоту O(n), поэтому временная сложность составляет O(n).

- Временная сложность операций зависит от высоты дерева. Для сбалансированных BST временная сложность равна O(logn). Для несбалансированных BST временная сложность составляет O(n).

- BST используются для реализации карт, множеств и таблиц поиска. Для этих целей они более эффективны, чем связанные списки и массивы.

- BST можно реализовать с помощью связанной структуры данных с узлами, имеющими ключи, значения и ссылки на левые и правые дочерние узлы.

- Узлы упорядочены по значению ключа. Ключи левого поддерева меньше, чем ключ корневого узла, а ключи правого поддерева больше, чем ключ корневого узла.

- Сбалансированный BST имеет высоту O(logn), что приводит к временной сложности операций O(logn). Несбалансированный BST имеет высоту O(n) и временную сложность O(n).
