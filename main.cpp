#include <iostream>
#include "rabin_miller.hpp"

auto main() -> int {

// Number of iterations
int k = 4;

std::cout << "All primes smaller than 100000: \n";
for (int n = 1; n < 100000; ++n) {
    if ( isPrime(n, k) ) {
        std::cout << n << " ";
    }
}

return 0;
}