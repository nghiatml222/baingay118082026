#include <iostream>
using namespace std;

int main()
{
    int Arr[6] = { 2, 3, 4, 5 };
    int Soluong = 4;

    // Them 1 vao cuoi
    Arr[Soluong] = 1;
    Soluong++;

    // Them 1 vao dau
    for (int i = Soluong; i > 0; i--)
        Arr[i] = Arr[i - 1];

    Arr[0] = 1;
    Soluong++;

    for (int i = 0; i < Soluong; i++)
        cout << Arr[i] << " ";

    return 0;
}