#include <iostream>
using namespace std;

int insertionSort(int arr[], int size)
{
    for (int step = 0; step < size; step++)
    {
        int key = arr[step];
        int j = step - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;

        /* code */
    }
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int array[] = {9, 4, 5, 1, 2, 7, 8};
    int size = sizeof(array) / sizeof(int);
    insertionSort(array, size);
}