#include <iostream>
using namespace std;

int LonNhat(int n, int a[])
{
    int max = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];
    }

    return max;
}

int ViTriNhoNhat(int n, int a[])
{
    int vt = 0;

    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[vt])
            vt = i;
    }

    return vt;
}

int ViTriDau(int n, int a[], int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            return i;
    }

    return -1;
}

int ViTriCuoi(int n, int a[], int x)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == x)
            return i;
    }

    return -1;
}

int Dem(int n, int a[], int x)
{
    int dem = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
            dem++;
    }

    return dem;
}

int main()
{
    int a[100];
    int n, x;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Nhap x: ";
    cin >> x;

    cout << "Lon nhat: " << LonNhat(n, a) << endl;
    cout << "Vi tri nho nhat: " << ViTriNhoNhat(n, a) << endl;
    cout << "Vi tri dau cua x: " << ViTriDau(n, a, x) << endl;
    cout << "Vi tri cuoi cua x: " << ViTriCuoi(n, a, x) << endl;
    cout << "So lan xuat hien: " << Dem(n, a, x);

    return 0;
}