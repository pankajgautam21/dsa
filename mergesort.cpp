#include <iostream>
using namespace std;
void merge(int arr[], int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    // merge two sorted array
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];
    // copy content
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        arr2[i] = arr[k++];
    }
    // merge two sorted array
    int i = 0;
    int j = 0;
    int a = s;
    while (i < len1 && j < len2)
    {
        if (arr1[i] < arr2[j])
        {
            arr[a++] = arr1[i++];
        }
        else
        {
            arr[a++] = arr2[j++];
        }
    }
    while (i < len1)
    {
        arr[a++] = arr1[i++];
    }
    while (j < len2)
    {
        arr[a++] = arr2[j++];
    }
    delete[] arr1;
    delete[] arr2;
}
void mergesort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int mid = (s + e) / 2;
    // left wala  part katdo
    mergesort(arr, s, mid);
    // right wala  part katdo
    mergesort(arr, mid + 1, e);
    // merge kardo
    merge(arr, s, e);
}
int main()
{
    int n;
    cout << "Please enter size of array:-";
    cin >> n;
    int *arr = new int[n];
    cout << "Please enter Elements of array:-" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergesort(arr, 0, n - 1);
    cout << "Array after sorting:-";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}