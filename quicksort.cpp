#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int count = 0;
    int pivotindex = arr[s];
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] < pivotindex)
            count++;
    }
    int pivot = s + count;
    // cout<<"pivot"<<pivot<<endl;
    swap(arr[pivot], arr[s]);
    int i = s;
    int j = e;
    // ab right aur left wala part sambhalo
    while (i < j && (i < pivot && j > pivot))
    {
        while (arr[i] < arr[pivot]) //&& i<pivot)
        {
            i++;
        }
        while (arr[j] > arr[pivot]) //&& j>pivot)
        {
            j--;
        }
        swap(arr[i], arr[j]);
    }
    return pivot;
}
void quicksort(int arr[], int s, int e)
{
    if (s >= e)
        return;
    int p = partition(arr, s, e);
    //  cout<<p<<" ";
    // right wala part
    quicksort(arr, s, p - 1);
    // left wala part
    quicksort(arr, p + 1, e);
}
int main()
{
    int n;
    cout << "Please enter size of array:-";
    cin >> n;
    int *arr = new int[n];
    cout << "Please enter Elements of array:-";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    quicksort(arr, 0, n-1);
    cout << "array after sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}