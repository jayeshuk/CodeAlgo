#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int val)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == val)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int n, x;
    cout << "Linear Search" << endl;

    cout << "Enter size of Array:";
    cin >> n;
    cout << "Enter Array elements:";
    int arr[100] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to Search:";
    cin >> x;

    int response = linearSearch(arr, n, x);
    if (response == -1)
    {
        cout << "Element is not present in the Array";
    }
    else
    {
        cout << "Element is present at position: " << response + 1;
    }

    return 0;
}