#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
    int c = a;
    a = b;
    b = c;
}

void selection_sort(int* a, int n) {
    for (int k = 0; k < n - 1; k++)
        for (int j = k + 1; j < n; j++)
            if (a[k] > a[j])
                swap(a[j], a[k]);
}

int main()
{    
    int a[5] = { 5, 2, 1, 3, 1 };

    selection_sort(a, 5);

    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
}
