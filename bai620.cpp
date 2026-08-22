#include <stdio.h>

int main()
{
    int N, i;
    float x, S = 0;

    scanf("%f%d", &x, &N);

    for (i = 1; i <= N; i++)
        S += x / i;

    printf("S10 = %f", S);

    return 0;
}
