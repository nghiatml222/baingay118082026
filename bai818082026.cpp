#include <stdio.h>

int main()
{
    float diem, phanle;
    int phannguyen;

    printf("Nhap diem: ");
    scanf("%f", &diem);

    phannguyen = (int)diem;
    phanle = diem - phannguyen;

    if (phanle < 0.25)
        diem = phannguyen;
    else if (phanle < 0.75)
        diem = phannguyen + 0.5;
    else
        diem = phannguyen + 1;

    printf("Diem sau khi lam tron: %.1f", diem);

    return 0;
}
