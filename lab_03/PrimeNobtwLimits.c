#include <stdio.h>

int main() {
    int lower, upper, i, j, flag;

    printf("Enter lower limit: ");
    scanf("%d", &lower);
    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    i = lower;
    while (i <= upper) {
        if (i == 1 || i == 0) {
            i++;
            continue;
        }
        flag = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
        i++;
    }
    printf("\n");
    return 0;
}
