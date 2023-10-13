#include <iostream>
using namespace std;

void fun(int j[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        cout << j[i] << " ";
    }
    cout << sizeof(j) << endl;
}

int main()
{
    /*
    int arr[5] = {1, 2, 3, 4, 5};
    int start = 0, end = 4;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    */

    // FIBONACI SERIES
    /*
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n - 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    };
    cout << arr[n - 1] << " ";
    */

    //    PASS A ARRAY INTO A FUNCTION
    int arr[5] = {2, 5, 2, 3, 9};
    fun(arr, 5);
}