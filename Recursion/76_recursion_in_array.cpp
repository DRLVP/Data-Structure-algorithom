#include <iostream>
using namespace std;

// void printArr(int arr[], int i)
// {
//     if (i == -1)
//         return;
//     cout << arr[i] << " ";
//     printArr(arr, i - 1);
// }

// int sum(int arr[], int i, int n)
// {
//     if (i == n)
//         return 0;

//     return arr[i] + sum(arr, i + 1, n);
// }

int minElem(int arr[], int i, int n)
{
    if (i == n - 1)
        return arr[i];

    return min(arr[i], minElem(arr, i + 1, n));
}

int main()
{
    // int arr[] = {3, 5, 6, 7, 8};
    // printArr(arr, 5);

    // SUM OF ALL ARRAY ELEMENT
    // int arr[] = {3, 5, 6, 7, 2};

    // cout << sum(arr, 2, 5);

    // MINIMUM ELEMENT OF AN ARRAY
    int arr[] = {2, 5, 7, 8, 11};
    cout << minElem(arr, 0, 5) << " ";
}