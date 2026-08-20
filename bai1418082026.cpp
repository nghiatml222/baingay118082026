#include <stdio.h>

int main()
{
    float a, b, ketqua;
    char T;

    printf("Nhap a: ");
    scanf("%f", &a);

    printf("Nhap b: ");
    scanf("%f", &b);

    printf("Nhap phep tinh (+, -, *, /): ");
    scanf(" %c", &T);

    switch (T)
    {
    case '+':
        ketqua = a + b;
        printf("Ket qua = %.2f", ketqua);
        break;

    case '-':
        ketqua = a - b;
        printf("Ket qua = %.2f", ketqua);
        break;

    case '*':
        ketqua = a * b;
        printf("Ket qua = %.2f", ketqua);
        break;

    case '/':
        if (b != 0)
        {
            ketqua = a / b;
            printf("Ket qua = %.2f", ketqua);
        }
        else
            printf("Khong tinh duoc.");
        break;

    default:
        printf("Khong tinh duoc.");
    }

    return 0;
}