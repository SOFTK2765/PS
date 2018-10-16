#include <stdio.h>

int a[10001];

int main()
{
    int n, i, j, temp;
    scanf("%d", &n);
    for (i=0;i<n;i++)
    {
        scanf("%d\n", &temp);
        a[temp]++;
    }
    for(i=0;i<10001;i++)
        if(a[i]!=0)
            for(j=0;j<a[i];j++)
                printf("%d\n", i);

    return 0;
}