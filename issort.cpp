#include<iostream>
using namespace std;
bool issort(int arr[],int size)
{
    if(size==0||size==1)
    {
    return true;
    }
    if(arr[0]>arr[1])
    return false;
    return issort(arr+1,size-1);
}
int main()
{
 int n;
 cout<<"Please enter size of array:-";
 cin>>n;
 int *arr=new int[n];
 cout<<"Please enter Elements of array:-";
 for(int i=0;i<n;i++)
 cin>>arr[i];
 cout<<issort(arr,n);
 return 0;
}