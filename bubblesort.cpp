#include <iostream>
using namespace std;
int *bubblesort(int arr[], int n)
{
    if (n == 1 || n == 0)
        return arr;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
            swap(arr[i], arr[i + 1]);
    }
    return bubblesort(arr, n - 1);
}
int main()
{
    int arr[1000];
    int n;
    cout << "enter array size" << endl;
    cin >> n;
    cout << "enter array elements" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    bubblesort(arr, n);
    cout << "array after sorting" << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << endl;
    return 0;
}