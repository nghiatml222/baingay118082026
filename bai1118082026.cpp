#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Nhap 3 canh: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Khong phai tam giac.");
    }
    else if (a == b && b == c)
    {
        printf("Tam giac deu.");
    }
    else if (a * a + b * b == c * c ||
        a * a + c * c == b * b ||
        b * b + c * c == a * a)
    {
        if (a == b || a == c || b == c)
            printf("Tam giac vuong can.");
        else
            printf("Tam giac vuong.");
    }
    else if (a == b || a == c || b == c)
    {
        printf("Tam giac can.");
    }
    else
    {
        printf("Tam giac thuong.");
    }

    return 0;
}
