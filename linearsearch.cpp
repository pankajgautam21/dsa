#include<iostream>
using namespace std;
bool issort(int arr[],int size,int search)
{
    if(size<0)
    {
    return false;
    }
    if(arr[0]==search)
    return true;
    return issort(arr+1,size-1,search);
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
 int search;
 cout<<"enter number to be searched"<<endl;
 cin>>search;
 cout<<issort(arr,n,search);
 return 0;
}