#include <iostream>
using namespace std;
bool reverse(string s, int start, int end)
{
    if (start < end)
    {
    if(s[start]!=s[end])
    return false;
    return reverse(s, ++start,--end);
    }
    return true;
}
int main()
{
    string s;
    cout << "Please enter any string:-";
    cin >> s;
    int start = 0;
    int end = s.length() - 1;
    cout << reverse(s, start, end);
    return 0;
}