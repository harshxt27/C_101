#include <stdio.h>
int main() {
int n;
printf("Enter a positive integer: ");
scanf("%d", &n);
printf("Prime numbers up to %d are: ", n);
for(int i = 2; i <= n; i++) {
int isPrime = 1;
for(int j = 2; j <= i/2 ; j++) {
if(i % j == 0) {
isPrime = 0;
break;
}
}
if(isPrime) {
printf("%d ", i);
}
}
printf("\n");
return 0;
}