# Heap sort
```cpp
void heapify(int arr[], int N, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < N && arr[l] > arr[largest])
        largest = l;
    if (r < N && arr[r] > arr[largest])
        largest = r;

    if (largest != i) {
        swap(arr[i], arr[largest]);

        heapify(arr, N, largest);
    }
}

void heapSort(int arr[], int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);

    for (int i = N - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}
```

# Here's how this function works

1. It first converts the array into a max heap by calling heapify() on all non-leaf nodes.
2. It then extracts the maximum element from the heap by swapping it with the last element.
3. It calls heapify() again on the new root element to maintain the max heap property.
4. It repeats steps 2 and 3 until the heap has 1 element.

# Example
```py
Input array: [5, 3, 8, 1, 4, 2, 9, 6]
```
1. Call heapify() on indices 3, 2 and 1 to convert to a max heap.Max heap: [9, 8, 5, 1, 4, 2, 3, 6]
2. Swap 9 and 8. Call heapify() on index 0.Max heap: [8, 6, 5, 1, 4, 2, 3]
3. Swap 8 and 6. Call heapify() on index 0.Max heap: [6, 5, 3, 1, 4, 2]
4. Swap 6 and 5. Call heapify() on index 0.Max heap: [5, 3, 2, 1, 4]
5. Swap 5 and 4. Call heapify() on index 0.Max heap: [4, 3, 2, 1]
6. Swap 4 and 3. Call heapify() on index 0.Max heap: [3, 2, 1]
7. Swap 3 and 2. Call heapify() on index 0.Max heap: [2, 1]
8. Swap 2 and 1. Call heapify() on index 0.Max heap: [1]

## Some key points about Heap sort

- It is an in-place algorithm, meaning it sorts the array in-place without using any auxiliary space.
- It is not a stable sort, meaning the original order of elements with equal keys may change.
- It works by first organizing the array into a heap data structure. Then it repeatedly extracts the maximum element from the heap and places it at the end of the array.
- The heap is a complete binary tree with the heap property: for every node, the key in that node is greater than or equal to the keys in its children (if they exist).
- Building the heap takes O(n) time. Extracting each element takes O(logn) time. So the overall time complexity is O(nlogn).
- The space complexity is O(1) since it is in-place.
- Heap sort is a good choice when memory space is limited.

So in summary, Heap sort is an efficient, in-place sorting algorithm with a time complexity of O(nlogn). It works by first organizing the array into a heap, and then repeatedly extracting the maximum element from the heap and placing it at the end of the array.

