# Insert sort
```cpp
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```

# Here's how this function works

1. Iterates over the array starting from index 1. The element at index 0 is considered sorted.
2. Extracts the current element arr[i] and stores it in a key variable.
3. Shifts all elements greater than key to the right by 1 position. This creates an empty space at the correct position for key.
4. Inserts key into the empty space.
5. Repeats steps 2-4 until the array is sorted.

# Example:
```py
Input array: [5, 3, 8, 1, 4, 2, 9, 6]
```

1. i = 1, key = 3. Shift 5 to the right. Insert 3.[3, 5, 8, 1, 4, 2, 9, 6]
2. i = 2, key = 8. No shifts needed.[3, 5, 8, 1, 4, 2, 9, 6]
3. i = 3, key = 1. Shift 8 and 5 to the right. Insert 1.[1, 3, 5, 8, 4, 2, 9, 6]
4. i = 4, key = 4. Shift 1, 3 and 5 to the right. Insert 4.[1, 3, 4, 5, 8, 2, 9, 6]
5. i = 5, key = 2. Shift 8, 5, 4 and 3 to the right. Insert 2.[1, 2, 3, 4, 5, 8, 9, 6]
6. i = 6, key = 9. No shifts needed.[1, 2, 3, 4, 5, 8, 9, 6]
7. i = 7, key = 6. Shift 9, 8, 5, 4, 3 and 2 to the right. Insert 6.[1, 2, 3, 4, 5, 6, 8, 9]

## Here are the key points about Insertion sort:

- Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort.

- It works by iterating over the list, inserting each element into the correct position in the sorted list to its left.

- It is an in-place sorting algorithm, meaning it sorts the list in-place without using any auxiliary space.

- It is a stable sorting algorithm, meaning it does not change the relative order of elements with equal keys.

- It has a time complexity of O(n2) in the worst and average cases, as it makes O(n) comparisons and O(n) shifts to insert each of the O(n) elements. The time complexity is O(n) in the best case when the list is already sorted.

- The space complexity is O(1) since it is in-place.

- Insertion sort is a good choice when:

- - The list is already substantially sorted (best case).
  - The list is small.
  - Stability is important.
  - Simple implementation and low overhead is valued over speed.

- The code consists of a for loop that iterates over the list, and an inner while loop that shifts elements in the sorted list to make room for the current element.

- Insertion sort is a simple, stable sorting algorithm with a time complexity of O(n2).