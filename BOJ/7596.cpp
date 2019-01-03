#include <bits/stdc++.h>

using namespace std;

string a[201];

int main()
{
    int ind = 0;
    while(++ind)
    {
        int n;
        scanf(" %d ", &n);
        if(n==0) break;
        for(int i=0;i<n;i++)
            getline(cin, a[i]);
        sort(a, a+n);
        cout << ind << endl;
        for(int i=0;i<n;i++)
            cout << a[i] << endl;
    }

    return 0;
}