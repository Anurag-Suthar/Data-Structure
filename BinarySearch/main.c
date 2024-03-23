#include <stdio.h>

int binarySearch(int arr[], int size, int target)
{

    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        /* code */
        int mid = (low + high) / 2;
        if (arr[mid] == target)
        {
            printf("mid");
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        return -1; // now found
    }
}

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    printf(binarySearch(array, 5, 4));
    binarySearch(array, 5, 4);
    printf("hello world");
    // return 0;===
}