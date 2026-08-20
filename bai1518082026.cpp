#include <stdio.h>

int main()
{
    char kytu;

    printf("Nhap ky tu: ");
    scanf(" %c", &kytu);

    switch (kytu)
    {
    case 'u':
    case 'e':
    case 'o':
    case 'a':
    case 'i':
        printf("Nguyen am.");
        break;

    default:
        if (kytu >= '0' && kytu <= '9')
            printf("Ky so.");
        else if ((kytu >= 'a' && kytu <= 'z') ||
            (kytu >= 'A' && kytu <= 'Z'))
            printf("Phu am.");
        else
            printf("Ky tu dac biet.");
    }

    return 0;
}
