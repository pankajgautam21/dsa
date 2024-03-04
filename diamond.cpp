#include <iostream>
using namespace std;
int main()
{
    int k=1;
    int d=0;
    for(int i=1;i<=5;i++)
    {
        k=1;
        i>3?d--:d++;
     for(int j=1;j<=5;j++)   
      {
         if(j>=4-d&&j<=2+d&&k)
         {
           cout<<"*";
           k=0;
         }
         else
         {
            cout<<" ";
            k=1;
         }
      }
      cout<<endl;
    }

    return 0;
}