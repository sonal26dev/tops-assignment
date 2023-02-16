// Write a program of to sort the array using templates.
#include <iostream>
using namespace std;
template <class T>
void selectionSort(int a[], int n)
{
    for ( int i = 0; i < n - 1; i++)
    {
        int min = i;
        for ( int j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        T temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}
int main()
{
    int a[] = {22, 91, 35, 78, 10, 8, 75, 99, 1, 67};
    int n = sizeof(a) / sizeof(a[0]);
    int i;

    cout << "Given array is:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;

    selectionSort<int>(a, n);

    printf("\nSorted array is: \n");
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
