#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf("%d ", &n);
    while(n--)
    {
        string s;
        getline(cin, s);
        if(s.substr(0, 10)=="Simon says") cout << s.substr(10, s.length()-10) << endl;
    }

    return 0;
}