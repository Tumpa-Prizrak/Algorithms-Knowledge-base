# Quick sort
```cpp
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

# Here's how this function works

The partition() function chooses the last element as the pivot.
- It partitions the array by iterating j from low to high - 1.
- - If arr[j] < pivot, it swaps arr[i+1] and arr[j], and increments i.
- - This continues until j reaches high - 1. At the end, the pivot is swapped with arr[i+1].
- - The final index i is returned.
<br><br>
- The quicksort() function then recursively calls itself to sort the left and right partitions.
- - The left partition is from low to pi - 1.
- - The right partition is from pi + 1 to high.
- - This process continues until the array is sorted.

The time complexity of quicksort is *O(N log N)*

## Here are the key points about Quicksort:

- Quicksort is a divide and conquer algorithm. It picks an element as pivot and partitions the list around the pivot such that all elements with values less than the pivot come before it, and all elements with values greater than the pivot come after it.

- It is not a stable sorting algorithm, meaning it does not preserve the original order of elements with equal keys.

- It has an average time complexity of O(nlogn), but a worst case time complexity of O(n2). The space complexity is O(logn) due to recursion stack.

- Quicksort is a good choice when:
    - A fast sorting algorithm is needed.
    - Stability is not important.

- It works by selecting a pivot element, partitioning the list around the pivot such that all elements with values less than the pivot come before it, and all elements with values greater than the pivot come after it. The list is then partitioned recursively.

- The code consists of two functions:
    - quicksort() - The main recursive function that partitions the list.
    - partition() - Partitions the list around a pivot element.

- The quicksort() function picks a pivot, partitions the list around it, and recursively calls itself to sort the two partitions.

- Quicksort is a fast, recursive sorting algorithm with an average time complexity of O(nlogn). It works by selecting a pivot element, partitioning the list around the pivot such that all elements with values less than the pivot come before it, and all elements with values greater than the pivot come after it. The list is then partitioned recursively.

- The worst case occurs when the pivot is the smallest or largest element, leading to an O(n2) time complexity. This can be avoided by choosing a random pivot.

- Quicksort is a good choice when a fast, efficient sorting algorithm is needed and stability is not important. The space complexity is O(logn) due to recursion stack.