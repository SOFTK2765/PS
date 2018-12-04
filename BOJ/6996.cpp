#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    scanf(" %d", &n);
    while(n--)
    {
        string a, b;
        cin >> a >> b;
        string c, d;
        c = a;
        d = b;
        sort(c.begin(), c.end());
        sort(d.begin(), d.end());
        cout << a << " & " << b << " are ";
        if(c!=d) cout << "NOT ";
        cout << "anagrams." << endl;
    }

    return 0;
}