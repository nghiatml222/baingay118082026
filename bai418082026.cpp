#include <stdio.h>

int main()
{
    int a, b;

    printf("Nhap a: ");
    scanf("%d", &a);

    printf("Nhap b: ");
    scanf("%d", &b);

    if (a % b == 0)
        printf("%d chia het cho %d.", a, b);
    else
        printf("%d khong chia het cho %d.", a, b);

    return 0;
}
