#include <vector>
using namespace std;

/**
 * @brief Greatest Common Divisor
 * @return int 
 */
int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

/**
 * @brief Least Common Multiple
 * @return int 
 */
int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

/**
 * @brief The sieve of Erotosthenes
 * @return std::vector<int> 
 */
vector<int> compute_primes(int n) {
    bool sieve[n + 1];    // sieve
    vector<int> primes;     // vector to which prime numbers will be added
    
    for (int i = 2; i <= n; i++) {   // initially, all the numbers are not crossed out
        sieve[i] = true;
    }
 
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {     // if "i" is not crossed out
            primes.push_back(i);
            
            for (int j = i * i; j <= n; j += i) {    // we cross out all multiples starting from i^2
                sieve[j] = false;
            }
        }
    }
    
    
    // You can also use next code:
    //    int output[primes.size()];
    //    copy(v.begin(), v.end(), output)
    // if you want to return array
    // Time: O(n) (linear)
    
    return primes;
}
