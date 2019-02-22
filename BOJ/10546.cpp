#include <bits/stdc++.h>

using namespace std;

string a[200001];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<2*n-1;i++)
        cin >> a[i];
    sort(a, a+2*n-1);
    for(int i=0;i<2*n-1;i+=2)
        if(a[i]!=a[i+1])
        {
            cout << a[i];
            break;
        }

    return 0;
}