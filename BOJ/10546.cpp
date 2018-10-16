#include <bits/stdc++.h>

using namespace std;

string a[100001];

int main()
{
    int n;
    scanf("%d", &n);
    string a;
    for(int i=0;i<2*n-1;i++)
        cin >> a[i];
    sort(a, a+2*n-1);
    for(int i=0;i<2*n-1;i+=2)
        if(a[i]!=a[i+1]) printf("%s", a[i]);

    return 0;
}