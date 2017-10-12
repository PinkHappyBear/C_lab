#include <stdio.h>
#include<math.h>
#include <stdlib.h>
main(void)
{

    double a, x, G, F, Y;
    int q;
    float mas1[40],mas2[40];
    printf("Добро пожаловать в lab03\n");
    do
    {
        printf("Для выхода из программы нажмите 0\n");
        printf("Для рассчёта формулы G нажмите 1\n");
        printf("Для рассчёта формулы F нажмите 2\n");
        printf("Для рассчёта формулы Y нажмите 3\n");
        printf("Значение:");
        scanf("%d", &q);
        switch (q) {
            case 1:
                if (q == 1)
                printf("Enter a:");
                scanf("%lf", &a);
                printf("Enter x:");
                scanf("%lf", &x);
                G = (9 * (20 * pow(a, 2) - 31 * a * x + 12 * pow(x, 2))) / (10 * pow(a, 2) - 17 * a * x + 6 * pow(x, 2));
                printf("result:");
                printf("%lf\n", G);
                break;
            case 2:
                if (q == 2)
                printf("Enter a:");
                scanf("%lf", &a);
                printf("Enter x:");
                scanf("%lf", &x);
                F = -atan(7 * pow(a, 2) - 2 * a * x - 9 * pow(x, 2));
                printf("result:");
                printf("%lf\n", F);
                break;
            case 3:
                if (q == 3)
                printf("Enter a:");
                scanf("%lf", &a);
                printf("Enter x:");
                scanf("%lf", &x);
                Y = -atan(2 * pow(a, 2) + a * x - 3 * pow(x, 2));
                printf("result:");
                printf("%lf\n", Y);
        }
    } while ( q != 0);
    printf("Good buy");
    return 0;
}
