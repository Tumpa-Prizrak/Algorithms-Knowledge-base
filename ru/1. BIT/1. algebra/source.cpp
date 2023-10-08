#include <vector>
using namespace std;

int gcd(int a, int b) { //НОД
    return b ? gcd(b, a % b) : a;
}
 
int lcd(int a, int b) { // НОК
    return a / gcd(a, b) * b;
}
 
vector<int> compute_primes(int n) { //Решето Эратосфена
    bool sieve[n + 1];    //решето
    vector<int> primes;     //вектор, в который будут добавляться простые числа
    primes.reserve(n);
    
    for (int i = 2; i <= n; i++) {   // изначально все числа не вычеркнуты
        sieve[i] = true;
    }
 
    for (int i = 2; i <= n; i++) {
        if (sieve[i]) {     // если i не вычеркнуто
            primes.push_back(i);
            
            for (int j = i * i; j <= n; j += i) {    // вычеркиваем все кратные числа начиная с i^2
                sieve[j] = false;
            }
        }
    }
    
    
    // Вы также можете использовать этот код:
    //    int output[primes.size()];
    //    copy(v.begin(), v.end(), output)
    // если хотите вернуть массив
    // Время: O(n) (Линейная)
    
    return primes;
}
