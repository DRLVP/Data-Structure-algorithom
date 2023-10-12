#include <iostream>
using namespace std;

int main()
{
    // int arr[10] = {5, 2, 5, 24, 22, 11, 68, 97, 79, 80};

    // for (int i = 0; i < 10; i++)
    // {

    //     cout << arr[i] << " ";
    // }
    /*
    int size; // this is not good habit array length is always constant value
    cout << "Enter the array length: ";
    cin >> size;
    int arr[size];
    cout << "enter 5 random number: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    */
    /*
    int arr[10];
    int a;
    // cout << sizeof(a);
    // cout << sizeof(arr);
    cout << sizeof(arr[0]);
    */
    /*
    int arr[5] = {2, 5, 7, 8, 5};
    int ans = INT16_MAX;

    // min value
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < ans)
        {
            ans = arr[i];
        }
    }

    cout << ans;
    */

    int arr[5] = {2, 5, 7, 8, 5};
    int ans = INT16_MIN;

    // max value
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > ans)
        {
            ans = arr[i];
        }
    }

    cout << ans;

    return 0;
}