#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    switch ((discriminant > 0) - (discriminant < 0)) {
        case 1: // Discriminant > 0 (Positive)
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Two distinct real roots: root1 = %.2lf and root2 = %.2lf\n", root1, root2);
            break;
        case 0: // Discriminant == 0
            root1 = root2 = -b / (2 * a);
            printf("Two equal real roots: root1 = root2 = %.2lf\n", root1);
            break;
        case -1: // Discriminant < 0 (Negative)
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Two complex conjugate roots: root1 = %.2lf+%.2lfi and root2 = %.2lf-%.2lfi\n", realPart, imagPart, realPart, imagPart);
            break;
    }

    return 0;
}