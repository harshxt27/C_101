#include <stdio.h>
#include <math.h>

// Function to evaluate sine series
double evaluateSineSeries(double x, int n) {
    double sum = 0.0;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        int power = (2 * i) + 1; // 1, 3, 5, ...
        double term = (double)sign * pow(x, power) / tgamma(power + 1);
        sum += term;
        sign *= -1; // Alternate the sign
    }
    return sum;
}

int main() {
    double x;
    int n;

    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    double result = evaluateSineSeries(x, n);
    printf("Sine series value for sin(%.2lf) with %d terms: %.6lf\n", x, n, result);

    return 0;
}
    