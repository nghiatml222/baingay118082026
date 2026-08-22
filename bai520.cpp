#include <stdio.h>

int main()
{
    int N, i;
    long long gt = 1, S = 0;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        gt *= i;
        S += gt;
    }

    printf("S8 = %lld\n", gt);
    printf("S9 = %lld", S);

    return 0;
}
