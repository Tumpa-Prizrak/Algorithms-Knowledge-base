# Sieve of Eratosthenes
```cpp
vector<int> compute_primes(int n) {
    bool sieve[n + 1];
    vector<int> primes;
    primes.reserve(n);
    
    for (int i = 2; i <= n; i++) {
        sieve[i] = true;
    }
 
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {
            primes.push_back(i);
            
            for (int j = i * i; j <= n; j += i) {
                sieve[j] = false;
            }
        }
    }
    
    return primes;
}
```

It works as follows:

1. Create a list of n + 1 boolean values. Initially, they all get the value True.
Starting from 2, check whether the current number in the sieve is marked as True. If it is, then it is a prime number. Add it to the list of prime numbers.
2. Mark all values in the list that are multiples of the current number as False. This will allow you to "weed out" non-prime numbers.
3. Repeat step 2 until we get to n.
4. Returns a list of prime numbers.

The time complexity of this algorithm is *O(n log log n)*.

Visualization of this algorithm:
![](https://brestprog.by/topics/primesieve/eratosthenes.gif)
