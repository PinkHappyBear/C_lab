#include<stdio.h>
#include<math.h>
#include <stdlib.h>
main() {

    double a, x, G, F, Y;
    printf("Enter a:");
    scanf("%lf", &a);
    printf("Enter x:");
    scanf("%lf", &x);
    G = (9 * (20 * pow(a, 2) - 31 * a * x + 12 * pow(x, 2))) / (10 * pow(a, 2) - 17 * a * x + 6 * pow(x, 2));
    printf("result:");
    printf("%lf\n", G);
    printf("Enter a:");
    scanf("%lf", &a);
    printf("Enter x:");
    scanf("%lf", &x);
    F = -atan(7 * pow(a, 2) - 2 * a * x - 9 * pow(x, 2));
    printf("result:");
    printf("%lf\n", F);

    printf("Enter a:");
    scanf("%lf", &a);
    printf("Enter x:");
    scanf("%lf", &x);
    Y = -atan(2 * pow(a, 2) + a * x - 3 * pow(x, 2));
    printf("result:");
    printf("%lf\n",Y);
    return 0;
}