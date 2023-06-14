# LCD
```cpp
int lcd(int a, int b) {
    return a / gcd(a, b) * b;
}
```
This algorithm is based on [Euclid's Algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm)
and uses the following formula:<br>
$$ a * b \over gcd(a, b) $$
