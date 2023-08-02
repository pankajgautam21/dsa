#include <iostream>
using namespace std;
int sum(int arr[], int size)
{
    if (size < 0)
    {
        return 0;
    }
    return sum(arr + 1, size - 1) + arr[0];
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0, 0, 0, 0};
    cout << sum(arr, 8);
    return 0;
}