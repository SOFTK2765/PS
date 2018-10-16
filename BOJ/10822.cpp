#include <bits/stdc++.h>

using namespace std;

char s[101];

int main()
{
    scanf("%s", s);
    int l = strlen(s);
    int num = 0, sum = 0;
    for(int i=0;i<l+1;i++)
    {
        if('0'<=s[i] && s[i]<='9')
        {
            num *= 10;
            num += s[i]-'0';
        }
        else
        {
            sum += num;
            num = 0;
        }
    }
    printf("%d", sum);

    return 0;
}