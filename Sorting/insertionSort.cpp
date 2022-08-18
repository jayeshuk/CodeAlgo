#include <iostream>
using namespace std;

int insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (current < arr[j])
                arr[j + 1] = arr[j];
            else
                break;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int n;
    cout << "Insertion Sort" << endl;
    cout << "Enter size of Array:";
    cin >> n;
    cout << "Enter Array elements:";

    int arr[100] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}