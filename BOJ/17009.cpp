#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (a*3+b*2+c>d*3+e*2+f?"A":a*3+b*2+c<d*3+e*2+f?"B":"T");

    return 0;
}