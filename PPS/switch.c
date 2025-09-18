#include <stdio.h>
#include <math.h>
int main() {
    int num,prod=1;
    printf("Enter the number to operate on: ");
    scanf("%d", &num);
    while ( num > 0 ){
        int digit = num % 10;
        prod = prod * digit;
        num = num / 10;

    }
    printf("The product of the digits is: %d\n", prod);

    switch (prod % 4) {
        case 0:
            printf("The product is divisible by 4\n");
            break;
        default:
            printf("The product is not divisible by 4\n");
            break;
    }

    return 0;
}

    return 0;
}

