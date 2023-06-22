# НОК
```cpp
int lcd(int a, int b) {
    return a / gcd(a, b) * b;
}
```
Этот алгоритм базируется на [Алгорите Евклида](https://ru.wikipedia.org/wiki/Алгоритм_Евклида)
и использует следующую формулу:<br>

$$ a * b \over gcd(a, b) $$ 

<!-- replit не поддерживает формулы. Грустно( -->
