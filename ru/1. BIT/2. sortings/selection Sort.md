# Selection Sort
```cpp
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
```

# Вот как работает эта функция

1. Она выполняет итерации по массиву, чтобы найти минимальный элемент в неотсортированной части массива.
2. Меняет минимальный элемент с первым элементом несортированной части.
3. Повторяет шаги 1 и 2, пока массив не будет отсортирован.

```py
Входной массив: [5, 3, 8, 1, 4, 2, 9, 6]
```
| i | Массив | min_idx | Swap | Массив |
| :-: | :-: | :-: | :-: | :-: |
| 0 | [5, 3, 8, 1, 4, 2, 9, 6] | 3 (индекс 1) | Поменяйте местами 1 и 5. | [1, 3, 8, 5, 4, 2, 9, 6] |
| 1 | [3, 8, 5, 4, 2, 9, 6] | 1 (индекс 3) | Поменяйте местами 3 и 3. | [1, 3, 8, 5, 4, 2, 9, 6] |
| 2 | [8, 5, 4, 2, 9, 6] | 3 (индекс 2) | Поменяйте местами 2 и 8. | [1, 3, 2, 5, 4, 8, 9, 6] |
| 3 | [5, 4, 8, 9, 6] | 4 (индекс 4) | Поменяйте местами 4 и 5. | [1, 3, 2, 4, 5, 8, 9, 6] |
| 4 | [5, 8, 9, 6] | 6 (индекс 6) | Поменяйте местами 6 и 5. | [1, 3, 2, 4, 6, 8, 9, 5] |
| 5 | [8, 9, 5] | 7 (индекс 5) | Поменяйте местами 5 и 8. | [1, 3, 2, 4, 6, 5, 9, 8] |
| 6 | [9] | 6 (индекс 9) | Поменять местами не нужно. | [1, 3, 2, 4, 6, 5, 9, 8] |

## Вот ключевые моменты сортировки по выбору:

- Selection sort - это алгоритм сортировки in-place. Он находит минимальный элемент в несортированном списке и меняет его местами с первым элементом. Затем он находит второй минимальный элемент и меняет его местами со вторым элементом, и так далее.

- Это не стабильный алгоритм сортировки, то есть он не сохраняет первоначальный порядок элементов с одинаковыми ключами.

- Его временная сложность составляет O(n2) во всех случаях. Пространственная сложность составляет O(1), поскольку сортировка выполняется на месте.

- Отборочная сортировка является хорошим выбором, когда:
    - Список небольшой.
    - Стабильность не важна.
    - Простота реализации важнее скорости.

- Она работает путем итерации списка, поиска минимального элемента в неотсортированной части и замены его самым первым неотсортированным элементом.

- Код состоит из двух вложенных циклов for. Внешний цикл for выполняет итерацию над несортированной частью списка. Внутренний цикл for находит минимальный элемент в этой несортированной части. Затем минимальный элемент меняется местами с самым первым неотсортированным элементом.

- Selection sort выполняет итерации по списку, находя минимальный элемент и меняя его местами с самым первым неотсортированным элементом на каждой итерации. В результате минимальный элемент "всплывает" в начало списка.

- Selection sort - это алгоритм сортировки на месте с временной сложностью O(n2). Он работает, находя минимальный элемент в несортированном списке и меняя его местами с первым элементом, затем находя второй минимальный элемент и меняя его местами со вторым элементом, и так далее.

- Пространственная сложность составляет O(1), поскольку сортировка выполняется на месте. Сортировка выбором проста в реализации, но неэффективна на больших списках.

- Это не стабильный алгоритм сортировки.