#include <iostream>
using namespace std;

void AddValue(int value, int pos, int& Soluong, int Arr[])
{
    for (int i = Soluong; i > pos; i--)
        Arr[i] = Arr[i - 1];

    Arr[pos] = value;
    Soluong++;
}

void RemoveValue(int pos, int& Soluong, int Arr[])
{
    for (int i = pos; i < Soluong - 1; i++)
        Arr[i] = Arr[i + 1];

    Soluong--;
}

void OutputArray(int Soluong, int Arr[])
{
    for (int i = 0; i < Soluong; i++)
        cout << Arr[i] << " ";
    cout << endl;
}

int main()
{
    int Arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int Soluong = 9;
    int value, pos;

    cout << "Nhap gia tri: ";
    cin >> value;

    cout << "Nhap vi tri: ";
    cin >> pos;

    AddValue(value, pos, Soluong, Arr);

    cout << "Sau khi them: ";
    OutputArray(Soluong, Arr);

    cout << "Nhap vi tri can xoa: ";
    cin >> pos;

    RemoveValue(pos, Soluong, Arr);

    cout << "Sau khi xoa: ";
    OutputArray(Soluong, Arr);

    return 0;
}
