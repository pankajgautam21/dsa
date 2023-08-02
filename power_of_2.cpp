#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
    {
    return 1;
    }
    return power(n-1)*2;
}
int main()
{
 int n;
 cout<<"Enter a number:-";
 cin>>n;
 cout<<"Power of 2^"<<n<<" is:-"<<power(n);
 return 0;
}