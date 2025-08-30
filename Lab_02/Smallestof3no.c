#include <stdio.h>
int main() {
    int a,b,c,temp;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    temp = (a > c)? c : a;
    (temp > b)?printf("%d is the smallest number", b) : printf("%d is the smallest number", temp);
    return 0;
}