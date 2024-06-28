#include <stdio.h>

/**
* Function to find and print the largest prime factor of a given number
* @n: the number to find the largest prime factor of
*/

void largest_prime_factor(long n) {
    long factor = 2;
    long largest = 0;

    while (n > 1) {
        if (n % factor == 0) {
            largest = factor;
            while (n % factor == 0) {
                n /= factor;
            }
        }
        factor++;
        if (factor * factor > n && n > 1) {
            largest = n;
            break;
        }
    }
    printf("%ld\n", largest);
}


int main(void) {
    long number = 612852475143;
    largest_prime_factor(number);
    return 0;
}
