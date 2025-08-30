#include <stdio.h>
void main() {
    printf("Enter the numbers to count\n");
    int prime_count=0;  
    int composite_count=0;
    int n;
    do {
        scanf("%d",&n);
        if (n == -1)
            break;
        if (n <= 1)
            continue;
        int isprime=1;
        int i = 2;
        while (i <= n/2) {
            if (n % i == 0) {
                isprime = 0;
                break;
            }
            i++;
        }
        if (isprime) {
            prime_count++;
        } else {
            composite_count++;
        }
    } while (n != -1);
    printf("Prime count: %d\n", prime_count);
    printf("Composite count: %d\n", composite_count);
}
