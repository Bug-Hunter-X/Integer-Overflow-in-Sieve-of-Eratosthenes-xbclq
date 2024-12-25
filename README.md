# Integer Overflow in Sieve of Eratosthenes

This repository demonstrates a common error in C++: integer overflow in the Sieve of Eratosthenes algorithm.  The original code has a potential for integer overflow in the inner loop. The solution provides a corrected version that prevents this issue using `unsigned long long` to handle larger numbers and more robust checking for overflow.