#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    // start end and mid
    int start = 0, end = n - 1, mid;

    while (start <= end)
    {
        // find mid element
        mid = (start + end) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[1000];
    int n;
    cout << "Enter the size of arr: ";
    cin >> n;

    // Input element
    cout << "Enter the element of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element which is find: ";
    cin >> key;

    cout << BinarySearch(arr, n, key);
}