# GCD
```cpp
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
```
This is a recursive way to get gcd of two numbers.<br>
To do this, it uses [Euclid's Algorithm](https://en.wikipedia.org/wiki/Euclidean_algorithm).<br>
Consider an example for the numbers 15 and 4:<br>
| *a* | *b* |
| :-: | :-:|
| 15 | 4 |
| 4 | 3 |
| 3 | 1 |
| 1 | 0 |

Thus, since the right number is 0 (false),
we return the left number (1)<br>
*Answer: 1*