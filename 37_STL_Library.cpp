#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    /*
    // decleare vector
    // vector<int> myVac;
    // vector<int> vac;
    // vector<int> codeVac = {1, 2, 3, 4, 6};
    // cout << codeVac.size() << " ";

    // add value in vector
    // vac.push_back(5);
    // vac.push_back(11);
    // vac.push_back(7);

    // UPDATE VECTOR VALUE
    // vac[1] = 4;
    // myVac.push_back(11); // it's double his size and put the value in last
    // myVac.push_back(22);
    // myVac.push_back(5);
    // myVac.push_back(6);
    // myVac.push_back(3);
    // myVac.push_back(8);

    // for (int i = 0; i < myVac.size(); i++)
    // {
    //     cout << myVac[i] << " ";
    // }

    // SIZE OF VECTOR
    // cout << "Size of myVetor: " << myVac.size() << endl;
    // cout << "Capacity of myVetor: " << myVac.capacity();

    // Delete value vector
    // myVac.erase(myVac.begin());
    */

    vector<int> myVac;
    myVac.push_back(8);
    myVac.push_back(5);
    myVac.push_back(9);
    myVac.push_back(7);
    myVac.push_back(2);

    // myVac.erase(myVac.begin() + 1);
    // myVac.insert(myVac.begin() + 2, 500); // insert value in particular index
    // myVac[2] = 200;

    // for (int i = 0; i < myVac.size(); i++)
    // {
    //     cout << myVac[i] << " ";
    // }
    // cout << endl;

    // myVac.clear(); // remove all element from array not change in capcity
    // cout << myVac.size() << endl;
    // cout << myVac.capacity();

    vector<int> newArr;

    newArr = myVac;

    for (int i = 0; i < newArr.size(); i++)
    {
        cout << newArr[i] << " ";
    }
    cout << endl;
    /*
    // sorting array in increasing order
    sort(newArr.begin(), newArr.end());

    for (auto i : newArr)
        cout << i << " ";

    cout << endl;
    // sorting array in decreasing order
    // sort(newArr.begin(), newArr.end(), greater<int>());
    sort(newArr.rbegin(), newArr.rend());
    for (auto i : newArr)
        cout << i << " ";
    */

    // SEARCH IN BINARY
    // cout << binary_search(newArr.begin(), newArr.end(), 55);

    // find index element
    cout << find(newArr.begin(), newArr.end(), 9) - newArr.begin();
}