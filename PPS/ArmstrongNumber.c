// To check if sum of cubes of digits of a number is equal to the number itself (Armstrong Number) //

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    original = num;

    // Find the number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Compute the sum of the cubes of the digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}
