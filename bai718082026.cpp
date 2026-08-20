#include <stdio.h>

int main()
{
    float toan, van, anh, dtb;

    printf("Nhap diem Toan: ");
    scanf("%f", &toan);

    printf("Nhap diem Van: ");
    scanf("%f", &van);

    printf("Nhap diem Anh: ");
    scanf("%f", &anh);

    dtb = (toan + van + anh) / 3;

    printf("Diem trung binh = %.2f\n", dtb);

    if (dtb >= 8.5)
        printf("Loai A.");
    else if (dtb >= 6.5)
        printf("Loai B.");
    else if (dtb >= 5)
        printf("Loai C.");
    else if (dtb >= 3.5)
        printf("Loai D.");
    else
        printf("Loai F.");

    return 0;
}
