#include <iostream>
using namespace std;
string reverse(string &s, int start, int end)
{
    if (start >= end)
    {
        return s;
    }
    swap(s[start++], s[end--]);
    return reverse(s, start, end);
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