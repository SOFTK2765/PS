#include <bits/stdc++.h>

using namespace std;

string a[1001];

bool cmp(const string &a, const string &b)
{
    if(a.length()!=b.length()) return a.length()<b.length();
    int al = a.length(), bl = b.length(), suma = 0, sumb = 0;
    for(int i=0;i<al;i++)
        if('0'<=a[i] && a[i]<='9') suma += a[i]-'0';
    for(int i=0;i<bl;i++)
        if('0'<=b[i] && b[i]<='9') sumb += b[i]-'0';
    if(suma!=sumb) return suma<sumb;
    return a<b;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a, a+n, cmp);
    for(int i=0;i<n;i++)
        cout << a[i] << endl;

    return 0;
}