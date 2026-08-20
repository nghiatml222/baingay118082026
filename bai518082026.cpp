#include <stdio.h>

int main()
{
    char kytu;

    printf("Nhap 1 ky tu: ");
    scanf(" %c", &kytu);

    if (kytu >= 'A' && kytu <= 'Z')
        printf("Chu hoa.");
    else if (kytu >= 'a' && kytu <= 'z')
        printf("Chu thuong.");
    else
        printf("Khong phai chu cai.");

    return 0;
}
