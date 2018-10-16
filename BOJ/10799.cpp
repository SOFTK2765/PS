#include <bits/stdc++.h>

using namespace std;

char a[100001] = {};

int main()
{
    scanf("%s", a);
    int l = strlen(a);
    int cnt = 0, sum = 0;
    for(int i=0;i<l;i++)
    {
        if(a[i]=='(')
        {
            if(a[i+1]==')')
            {
                sum += cnt;
                i++;
            }
            else cnt++;
        }
        else if(a[i]==')')
        {
            cnt--;
            sum++;
        }
    }
    printf("%d", sum);

    return 0;
}