public static class Algorithms {

    /// <summary>
    /// Greatest common divisor
    /// </summary>
    public static int GCD(int x, int y) => (y == 0)? x : GCD(y, x % y);

    /// <summary>
    /// Least common multiple
    /// </summary>
    public static int LCD(int x, int y) => x / gcd(x, y) * b;

    /// <summary>
    /// Sieve of Eratosthenes
    /// </summary>
    public static int[] SieveOfEratosthenes(int generateTo) {
        bool[] checks = new bool[++generateTo]; // sieve
        Array.Fill(checks, true); // initially, all the numbers are not crossed out
        List<int> output = new(); // list to which prime numbers will be added
        checks[0] = checks[1] = false;
        for (int i = 0; i < checks.Length; i++) {
            if (!checks[i]) continue;
            for (int j = 2; j <= checks.Length; j++) {
                if (i * j >= checks.Length) break;
                checks[i * j] = false; // we cross out all multiples
            }
        }
        for (int i = 0; i < checks.Length; i++) if (checks[i]) output.Add(i);
        return output.ToArray();
    }
}