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

# Вот как работает эта функция

Функция mergeSort() рекурсивно делит массив 
пополам, пока каждая половина не будет содержать 1 элемент, затем объединяет 
половинки обратно вместе в отсортированном порядке.

## Более конкретно:
- Если begin >= end, то массив имеет 1 элемент, поэтому он отсортирован. Возврат.
- Иначе, разделите массив пополам.
- Рекурсивно вызовите mergeSort() для левой половины.
- Рекурсивно вызовите mergeSort() для правой половины.
- Вызовите merge(), чтобы объединить две отсортированные половины.

# Пример:
```py
Входные данные: [5, 3, 8, 1, 4, 2, 9, 6]
```
1. Разделить на [5, 3, 8, 1] и [4, 2, 9, 6].
2. Разделите [5, 3, 8, 1] на [5, 3] и [8, 1].
3. Разделите [4, 2, 9, 6] на [4, 2] и [9, 6].
4. Объедините [5, 3] и [8, 1] в [3, 5, 8, 1].
5. Объедините [4, 2] и [9, 6] в [2, 4, 6, 9].
6. Объединить [3, 5, 8, 1] и [2, 4, 6, 9] в [1, 2, 3, 4, 5, 6, 8, 9].

Временная сложность сортировки слиянием составляет *O(N log N)* во всех случаях. Пространственная сложность составляет *O(n)* из-за стека рекурсий.

## Вот ключевые моменты о сортировке слиянием:

- Merge sort - это алгоритм "разделяй и властвуй". Он делит несортированный список на N подсписков, каждый из которых содержит 1 элемент. Затем он многократно объединяет подсписки для получения новых отсортированных подсписков, пока не останется только 1 подсписок.

- Это стабильный алгоритм сортировки, то есть он не изменяет относительный порядок элементов с одинаковыми ключами.

- Его временная сложность составляет O(nlogn) во всех случаях. Пространственная сложность составляет O(n) из-за временных массивов, используемых во время слияния.

- Слияние сортировок является хорошим выбором, когда:
    - Важна стабильность.
    - Необходим алгоритм сортировки с гарантированной временной сложностью O(nlogn).

- Он работает путем рекурсивного деления списка пополам, пока каждая половина не будет содержать 1 элемент, затем половинки объединяются вместе в отсортированном порядке.

- Код состоит из двух функций:
    - merge_sort() - основная рекурсивная функция, которая делит список и вызывает саму себя.
    - merge() - объединяет две отсортированные половины списка вместе.

- Функция merge_sort() делит список пополам, используя средний индекс, и рекурсивно вызывает саму себя для сортировки двух половин. Когда половины отсортированы, вызывается функция merge(), чтобы объединить их обратно в отсортированное целое.

- Merge sort - это рекурсивный алгоритм сортировки с временной сложностью O(nlogn). Он работает путем рекурсивного деления списка пополам, пока каждая половина не будет содержать 1 элемент, затем половинки объединяются вместе в отсортированном порядке.

- Это стабильный алгоритм сортировки и хорошо подходит для сортировки связанных списков в дополнение к массивам.

- Пространственная сложность составляет O(n) из-за временных массивов, используемых при объединении.