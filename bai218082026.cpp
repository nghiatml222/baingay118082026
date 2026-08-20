#include <stdio.h>

int main()
{
    int nam;

    printf("Nhap nam: ");
    scanf_s("%d", &nam);

    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
        printf("Nam nhuan.");
    else
        printf("Khong phai nam nhuan.");

    return 0;
}