
#include <stdio.h>

int main()
{
    int bai;

    printf("Chon bai 1:\n");
    printf("1. Nhiet do\n");
    printf("2. Tiet kiem\n");
    printf("3. Di hoc\n");
    printf("4. Nghi hoc\n");
    printf("Nhap bai: ");
    scanf("%d", &bai);

    switch (bai)
    {
    case 1:
    {
        float nhietdo;

        printf("Nhap nhiet do: ");
        scanf("%f", &nhietdo);

        if (nhietdo > 100)
            printf("Nuoc dang soi.");
        else
            printf("Nuoc chua soi.");

        break;
    }

    case 2:
    {
        float tien;

        printf("Nhap so tien tiet kiem: ");
        scanf("%f", &tien);

        if (tien >= 40000000)
            printf("Mua xe Airblade.");
        else
            printf("Khong mua xe Airblade.");

        break;
    }

    case 3:
    {
        int a, b, c;

        printf("Cau 1 (1: co, 0: khong): ");
        scanf("%d", &a);

        printf("Cau 2 (1: co, 0: khong): ");
        scanf("%d", &b);

        printf("Cau 3 (1: co, 0: khong): ");
        scanf("%d", &c);

        if (a == 1 || b == 1 || c == 1)
            printf("Khong den truong.");
        else
            printf("Den truong.");

        break;
    }

    case 4:
    {
        int nghi, tre;

        printf("Nhap so buoi nghi: ");
        scanf("%d", &nghi);

        printf("Nhap so buoi di tre: ");
        scanf("%d", &tre);

        if (nghi >= 4 || (nghi < 2 && tre > 4))
            printf("Cam thi.");
        else
            printf("Duoc thi.");

        break;
    }

    default:
        printf("Nhap sai.");
    }

    return 0;
}