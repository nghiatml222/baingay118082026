#include <stdio.h>

int main()
{
    int thang;
    float heso, luong;

    printf("Nhap tham nien (thang): ");
    scanf("%d", &thang);

    if (thang < 12)
        heso = 1.92;
    else if (thang < 36)
        heso = 2.34;
    else if (thang < 60)
        heso = 3;
    else
        heso = 4.5;

    luong = heso * 650000;

    printf("He so = %.2f\n", heso);
    printf("Luong = %.0f dong", luong);

    return 0;
}
