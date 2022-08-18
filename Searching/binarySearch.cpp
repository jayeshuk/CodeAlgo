#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int val)
{
    int start = 0, end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == val)
        {
            return mid;
        }
        else if (arr[mid] > val)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int n, x;
    cout << "Binary Search" << endl;

    cout << "Enter size of Array:";
    cin >> n;
    cout << "Enter Array elements in increasing order:";
    int arr[100] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter element to Search:";
    cin >> x;

    int response = binarySearch(arr, n, x);
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