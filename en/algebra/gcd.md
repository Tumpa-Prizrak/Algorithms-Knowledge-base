# GCD (greatest common divisor)

```cpp
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
```

This is a recursive way to get GCD of two numbers.
To do this, it uses [Euclid's Algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm).
Consider an example for the numbers 15 and 4:
| *a* | *b* |
| :-: | :-:|
| 15 | 4 |
| 4 | 3 |
| 3 | 1 |
| 1 | 0 |

Thus, since the right number is 0 (false),
we return the left number (1)

> *Answer: 1*
