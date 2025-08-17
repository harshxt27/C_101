// To generate all prime numbers between 2 limits using while loops //

#include <stdio.h>

int main() {
    int lower, upper, i, j, flag;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &lower, &upper);

    printf("Prime numbers between %d and %d are: ", lower, upper);

    i = lower;
    while (i <= upper) {
        if (i == 1 || i == 0) {
            i++;
            continue;
        }
        flag = 1;
        j = 2;
        while (j <= i / 2) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
            j++;
        }
        if (flag == 1)
            printf("%d ", i);
        i++;
    }
    return 0;
}
