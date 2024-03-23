#include <iostream>
using namespace std;

int LinearSearching(int array[], int size, int target)
{

    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return the -1 target is not found
}

int main()
{
    int arr[] = {10, 20, 12, 45, 11};
    int size = sizeof(arr) / sizeof(int);
    int target = 12;
    int idx = LinearSearching(arr, size, target);
    if (idx != -1)
    {
        cout << "Element " << target << " found at index " << idx << endl;
    }
    else
    {
        cout << "Element " << target << " not found in the array " << endl;
    }
}