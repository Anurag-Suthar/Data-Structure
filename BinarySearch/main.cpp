#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int low, int high)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else
        {
            if (arr[mid] < target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
int binarySeachRecursive(int arr[], int start, int end, int target)
{
    if (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySeachRecursive(arr, mid + 1, end, target);
        }
        else
        {
            return binarySeachRecursive(arr, 0, mid - 1, target);
        }
    }
};
int main()
{
    int arr[] = {3, 5, 6, 7, 8, 9, 10, 12};
    int target = 5;
    int n = sizeof(arr) / sizeof(arr[0]);
    // int result  = binarySearch(arr,target,0,n-1);
    int result = binarySeachRecursive(arr, 0, n - 1, target);
    if (result == -1)
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Element is found at index " << result << endl;
    }
}