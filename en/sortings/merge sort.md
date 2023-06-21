# Merge sort
```cpp
void merge(int array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;

    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }

    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }

    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}

void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
```

# Here's how this function works

The mergeSort() function recursively splits the array 
in half until each half has 1 element, then merge 
the halves back together in sorted order.

## More specifically:
- If begin >= end, the array has 1 element so it is sorted. Return.
- - Otherwise, split the array in half.
- Recursively call mergeSort() on the left half.
- Recursively call mergeSort() on the right half.
- Call merge() to merge the two sorted halves.

# Example:
```py
Input: [5, 3, 8, 1, 4, 2, 9, 6]
```
1. Split into [5, 3, 8, 1] and [4, 2, 9, 6]
2. Split [5, 3, 8, 1] into [5, 3] and [8, 1]
3. Split [4, 2, 9, 6] into [4, 2] and [9, 6]
4. Merge [5, 3] and [8, 1] into [3, 5, 8, 1]
5. Merge [4, 2] and [9, 6] into [2, 4, 6, 9]
6. Merge [3, 5, 8, 1] and [2, 4, 6, 9] into [1, 2, 3, 4, 5, 6, 8, 9]

The time complexity of merge sort is *O(N log N)* in all cases. The space complexity is *O(n)* due to recursion stack.

## Here are the key points about Merge sort:

- Merge sort is a divide and conquer algorithm. It divides the unsorted list into N sublists, each containing 1 element. Then it repeatedly merges sublists to produce new sorted sublists until there is only 1 sublist remaining.

- It is a stable sorting algorithm, meaning it does not change the relative order of elements with equal keys.

- It has a time complexity of O(nlogn) in all cases. The space complexity is O(n) due to the temporary arrays used during merging.

- Merge sort is a good choice when:
    - Stability is important.
    - A sorting algorithm with guaranteed O(nlogn) time complexity is needed.

- It works by recursively dividing the list in half until each half contains 1 element, then merging the halves back together in sorted order.

- The code consists of two functions:
    - merge_sort() - The main recursive function that divides the list and calls itself.
    - merge() - Merges two sorted halves of the list together.

- The merge_sort() function divides the list in half using the middle index, and calls itself recursively to sort the two halves. Once the halves are sorted, the merge() function is called to merge them back together into a sorted whole.

- Merge sort is a recursive sorting algorithm with a time complexity of O(nlogn). It works by recursively dividing the list in half until each half contains 1 element, then merging the halves back together in sorted order.

- It is a stable sorting algorithm and works well for sorting linked lists in addition to arrays.

- The space complexity is O(n) due to the temporary arrays used during merging.