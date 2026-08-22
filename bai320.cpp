#include <stdio.h>

int main()
{
    int N, i;
    float S1 = 0, S2 = 0, S3 = 0, S4 = 0;
    int dau = 1;

    scanf("%d", &N);

    for (i = 1; i <= N; i += 2)
        S1 += i;

    for (i = 2; i <= N; i += 2)
        S2 += i;

    for (i = 1; i <= N; i++)
        S3 += i * i;

    for (i = 1; i <= N; i++)
    {
        S4 += dau * i;
        dau *= -1;
    }

    printf("S1 = %.0f\n", S1);
    printf("S2 = %.0f\n", S2);
    printf("S3 = %.0f\n", S3);
    printf("S4 = %.0f\n", S4);

    return 0;
}