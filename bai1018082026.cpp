#include <stdio.h>

int main()
{
    float km, tien;

    printf("Nhap so km: ");
    scanf("%f", &km);

    if (km <= 1)
        tien = 15000;
    else if (km <= 5)
        tien = 15000 + (km - 1) * 13500;
    else
        tien = 15000 + 4 * 13500 + (km - 5) * 11000;

    printf("Tien taxi = %.0f dong", tien);

    return 0;
}
