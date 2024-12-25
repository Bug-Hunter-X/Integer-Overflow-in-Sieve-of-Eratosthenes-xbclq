std::vector<bool> is_prime(n + 1, true);
is_prime[0] = is_prime[1] = false;
for (int p = 2; p * p <= n; ++p) {
  if (is_prime[p]) {
    for (int i = p * p; i <= n; i += p)
      is_prime[i] = false;
  }
}
This code is used to find all prime numbers up to n.  The issue lies in the inner loop condition. When p is large, `i += p` can lead to integer overflow, resulting in undefined behavior.  In some cases, this might cause an infinite loop or produce incorrect results. 