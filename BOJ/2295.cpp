#include <bits/stdc++.h>

using namespace std;

int a[1001];
int s[501502];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf(" %d", &a[i]);
    int pos = 0;
    for(int i=0;i<n;i++)
        for(int j=i;j<n;j++)
            s[pos++] = a[i]+a[j];
    sort(s, s+pos);
    int target = n-1;
    pos--;
    while(target>=0)
    {
        int tmp = s[pos];
        while(pos>=0)
        {
            if(tmp == s[pos])
            {
                pos--;
                continue;
            }
            for(int i=n-1;i>=0;i--)
            {
                if(a[target] == s[pos]+a[i])
                {
                    printf("%d", a[target]);
                    return 0;
                }
                else if(a[target] > s[pos]+a[i]) break;
            }
            tmp = s[pos];
            pos--;
        }
        target--;
    }

    return 0;
}