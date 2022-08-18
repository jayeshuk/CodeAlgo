#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    int n;
    cout << "Topic Name" << endl;

    cout << "Enter size of Array:";
    cin >> n;
    cout << "Enter Array elements:";
    int arr[100] = {0};

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    return 0;
}