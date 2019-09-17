#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    scanf("%d", &s);
    string a;
    cin >> a;
    int cnt = 0;
    for(int i=0;i<s;i++)
        if(a[i]=='2') cnt++;
    printf("%s", cnt>s-cnt?"2":cnt<s-cnt?"e":"yee");

    return 0;
}