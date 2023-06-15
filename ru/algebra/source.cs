public static class Algorithms {

    /// <summary>
    /// НОД
    /// </summary>
    public static int GCD(int x, int y) => (y == 0)? x : GCD(y, x % y);

    /// <summary>
    /// НОК
    /// </summary>
    public static int LCD(int x, int y) => x / gcd(x, y) * b;

    /// <summary>
    /// Решето Эратосфена
    /// </summary>
    public static int[] SieveOfEratosthenes(int generateTo) {
        bool[] checks = new bool[++generateTo]; // решето
        Array.Fill(checks, true); // изначально все числа не вычеркнуты
        List<int> output = new(); // список, в который будут добавляться простые числа
        checks[0] = checks[1] = false;
        for (int i = 0; i < checks.Length; i++) {
            if (!checks[i]) continue;
            for (int j = 2; j <= checks.Length; j++) {
                if (i * j >= checks.Length) break;
                checks[i * j] = false; // вычёркиваем кратные числа
            }
        }
        for (int i = 0; i < checks.Length; i++) if (checks[i]) output.Add(i);
        return output.ToArray();
    }
}