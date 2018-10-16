#include <bits/stdc++.h>

using namespace std;

char a[10001];

int main()
{
    int pos = 0;
    char tmp;
    while(~scanf("%c", &tmp)) a[pos++] = tmp;
    int sum = 0;
    int num = 0;
    for(int i=0;i<pos;i++)
    {
        if('0'<=a[i] && a[i]<='9')
        {
            num *= 10;
            num += (a[i]-'0');
        }
        else if(a[i]==',')
        {
            sum += num;
            num = 0;
        }
    }
    printf("%d", sum+num);

    return 0;
}