#include <bits/stdc++.h>
using namespace std;

int OperationsBinaryString(char *str)
{
    if (str == NULL)
        return -1;

    int i = 1;
    int a = *str - '0';
    str++;
    while (*str != '\0')
    {
        char p = *str;
        str++;
        if (p == 'A')
            a &= (*str - '0');
        else if (p == 'B')
            a |= (*str - '0');
        else a ^= (*str - '0');
        str++;
    }

    return a;
}

int main()
{
    string s;
    getline(cin, s);
    int len = s.size();
    char *str = &s[0];
    cout << OperationsBinaryString(str);
}
