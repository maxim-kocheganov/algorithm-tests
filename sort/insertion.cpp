#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

void insertion_sort(int* a, int n) {
    for (int k = 1; k < n; k++)
        for (int i = k; i > 0 && a[i - 1] < a[i]; i--)
            // мы ещё не дошли до начала массива и предыдущий элемент меньше
            swap(a[i], a[i - 1]);
}

int main()
{
    int a[5] = { 5, 2, 1, 3, 1 };

    insertion_sort(a, 5);

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}
