int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}
 
int lcd(int a, int b) {
    return a / gcd(a, b) * b;
}
 
vector<int> compute_primes(int n) { // The sieve of Erotosthenes
    bool sieve[n + 1];    // sieve
    vector<int> primes;     // vector to which prime numbers will be added
    
    for (int i = 2; i <= n; i++) {   // Initially, all the numbers are not crossed out
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
