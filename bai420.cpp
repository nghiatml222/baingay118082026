#include <stdio.h>

int main()
{
    int N, i;
    float S1 = 0, S2 = 0, S3 = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
        S1 += 1.0 / i;

    for (i = 1; i <= N; i++)
        S2 += 1.0 / (2 * i);

    for (i = 1; i <= N; i++)
        S3 += 1.0 / (2 * i + 1);

    printf("S1 = %f\n", S1);
    printf("S2 = %f\n", S2);
    printf("S3 = %f\n", S3);

    return 0;
}
