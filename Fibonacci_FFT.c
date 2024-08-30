#include <stdio.h>
#include <math.h>

typedef long long int ll;

ll fibonacci_binet(ll n) {
    double sqrt5 = sqrt(5.0);
    double phi = (1.0 + sqrt5) / 2.0;

    double fib_n = (pow(phi, n)) / sqrt5;

    return (ll)round(fib_n);  // round to nearest integer
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        printf("Usage: %s <n>\n", argv[0]);
        return 1;
    }

    ll n = atof(argv[1]);
    ll result = fibonacci_binet(n);
    printf("Fibonacci number %lld is %lld\n", n, result);

    return 0;
}
