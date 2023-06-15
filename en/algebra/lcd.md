# LCM (least common multiple)

```cpp
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}
```

This algorithm is based on [Euclid's Algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm)
and uses the following formula:

$$ a * b \over gcd(a, b) $$
