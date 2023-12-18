#include <iostream>
using namespace std;
/*
bool LinearSearch(int arr[], int x, int N)
{
    // base case
    if (N == -1)
        return 0;

    if (arr[N] == x)
        return 1;
    else
        return LinearSearch(arr, x, N - 1);
}
*/

bool BinarySearch(int arr[], int start, int end, int X)
{

    if (start > end)
    {
        return 0;
    }

    int mid = start + end - start / 2;
    // Check if the element is present at the middle itself
    if (arr[mid] == X)
        return 1;
    // If the element is smaller than mid, then it can only be present in left subarray
    else if (arr[mid] < X)
        return BinarySearch(arr, mid + 1, end, X);
    else
        // Return 1 if we find the element in the right subarray
        return BinarySearch(arr, start, mid - 1, X);
}

int main()
{
    /*
    // recursion in Linear search
    int arr[] = {2, 5, 6, 7, 4, 9};
    int n;
    cout << "Enter your array size: ";
    cin >> n;
    int x;
    cout << "Enter the find element: ";
    cin >> x;
    cout << LinearSearch(arr, x, n);
    */

    // recursion in Binary Search
    int arr[] = {2, 5, 6, 7, 4, 9};
    int x;
    cout << "Enter the finding element: ";
    cin >> x;
    cout << BinarySearch(arr, 0, 5, x);
}