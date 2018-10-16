#include <bits/stdc++.h>

using namespace std;

char res[11];

int main()
{
    int n, b;
    scanf("%d %d", &n, &b);
    int pos = 0;
    while(n)
    {
        res[pos++] = ((n%b>9)?'A'+((n%b)-10):'0'+(n%b));
        n /= b;
    }
    for(int i=0;i<pos;i++)
        printf("%c", res[pos-1-i]);

    return 0;
}