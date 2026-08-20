#include <stdio.h>

int main()
{
    int thang, nam, nhuan;

    printf("Nhap thang: ");
    scanf("%d", &thang);

    switch (thang)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("Thang co 31 ngay.");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("Thang co 30 ngay.");
        break;

    case 2:
        printf("Nhap nam: ");
        scanf("%d", &nam);

        printf("Nam nhuan? (1: Co, 0: Khong): ");
        scanf("%d", &nhuan);

        if (nhuan == 1)
            printf("Thang 2 co 29 ngay.");
        else
            printf("Thang 2 co 28 ngay.");
        break;

    default:
        printf("Nhap sai.");
    }

    return 0;
}