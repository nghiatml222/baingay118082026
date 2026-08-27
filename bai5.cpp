#include <iostream>
using namespace std;

void NhapMang(int Soluong, int Arr[])
{
    for (int i = 0; i < Soluong; i++)
    {
        cout << "Arr[" << i << "] = ";
        cin >> Arr[i];
    }
}

void XuatMang(int Soluong, int Arr[])
{
    for (int i = 0; i < Soluong; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

void HoanVi(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

void BubbleSort(int Soluong, int Arr[])
{
    for (int i = 0; i < Soluong - 1; i++)
    {
        for (int j = 0; j < Soluong - 1 - i; j++)
        {
            if (Arr[j] > Arr[j + 1])
                HoanVi(Arr[j], Arr[j + 1]);
        }
    }
}

void SelectionSort(int Soluong, int Arr[])
{
    for (int i = 0; i < Soluong - 1; i++)
    {
        int vt = i;

        for (int j = i + 1; j < Soluong; j++)
        {
            if (Arr[j] < Arr[vt])
                vt = j;
        }

        HoanVi(Arr[i], Arr[vt]);
    }
}

int main()
{
    int Arr[20];
    int Soluong;

    cout << "Nhap so luong: ";
    cin >> Soluong;

    NhapMang(Soluong, Arr);

    BubbleSort(Soluong, Arr);
    cout << "Tang dan: ";
    XuatMang(Soluong, Arr);

    SelectionSort(Soluong, Arr);
    cout << "Giam dan: ";
    for (int i = Soluong - 1; i >= 0; i--)
        cout << Arr[i] << " ";

    return 0;
}
