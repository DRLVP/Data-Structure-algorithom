#include <iostream>
using namespace std;

int main()
{
    int arr[6] = {10, 4, 1, 4, 6, 9};

    for (int i = 0; i < 5; i++)
    {
        int index = i;
        for (int j = i + 1; i < 6; j++)
        {
            if (arr[i] < arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << arr[i] << " ";
    }
}