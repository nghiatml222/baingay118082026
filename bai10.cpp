#include <iostream>
using namespace std;

float TrungBinhAm(int n, int a[])
{
    int tong = 0, dem = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0)
        return 0;

    return (float)tong / dem;
}

float TrungBinhDuong(int n, int a[])
{
    int tong = 0, dem = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0)
        return 0;

    return (float)tong / dem;
}

float TrungBinhChiaHetCho3(int n, int a[])
{
    int tong = 0, dem = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 3 == 0)
        {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0)
        return 0;

    return (float)tong / dem;
}

int main()
{
    int a[100], n;

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "TB am: " << TrungBinhAm(n, a) << endl;
    cout << "TB duong: " << TrungBinhDuong(n, a) << endl;
    cout << "TB chia het cho 3: " << TrungBinhChiaHetCho3(n, a);

    return 0;
}
