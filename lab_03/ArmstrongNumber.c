        #include <stdio.h>
#include <math.h>

int main() {
    int num, temp;      
    double sum= 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = num; 
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
            printf("%d is not an Armstrong number.", num);
    return 0;
    }